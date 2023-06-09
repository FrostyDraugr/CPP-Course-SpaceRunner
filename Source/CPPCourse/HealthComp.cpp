// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComp.h"

// Sets default values for this component's properties
UHealthComp::UHealthComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	DefaultHealth = 3;
	Health = DefaultHealth;
}


// Called when the game starts
void UHealthComp::BeginPlay()
{
	Super::BeginPlay();

	Health = DefaultHealth;

	AActor* Owner = GetOwner();
	if(Owner)
	{
		Owner->OnTakeAnyDamage.AddDynamic(this, &UHealthComp::TakeDamage);
	}

	Player = Cast<ASpaceRunner>(Owner);

	// ...
	
}

void UHealthComp::TakeDamage(AActor* DamageActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if (Damage <= 0)
	{
		return;
	}

	Health = FMath::Clamp(Health - Damage, 0.0f, DefaultHealth);

	if (Player)
	{
		Player->UpdateHealth(Health, DefaultHealth);
	}

	if (Health == 0)
	{
		if (Player)
		{
			Player->SaveHighScore();
		}
		else
		{
		GetOwner()->Destroy();
		}
	}

}



