// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpaceRunner.h"
#include "HealthComp.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CPPCOURSE_API UHealthComp : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComp();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	ASpaceRunner* Player;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
		float DefaultHealth;

	UPROPERTY(BlueprintReadOnly)
		float Health;

	UFUNCTION()
		void TakeDamage(AActor* DamageActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy,
			AActor* DamageCauser);
		
};
