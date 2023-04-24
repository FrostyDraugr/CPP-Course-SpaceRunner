# CPP-Course#

**THIS PROJECT WAS BUILT IN VISUAL STUDIO 2022, UE 5.1.1**
**You will need the following free Plugin installed to your engine version: https://www.unrealengine.com/marketplace/en-US/product/visual-studio-integration-tool?sessionInvalidated=true**

All (Except for saving Highscores) classes have been coded in C++, before a Blueprint was created using
said C++ class as a parent.

Where I could I've reused components as much as I can, with both Obstacles and Player sharing the same Health Component.

First Release of the Project, Includes the following:

Controllable Player:
- 2D Movement
- Fire Action
- Health & Death

Generated level:
- Destructible Obstacles, that spawn within a changable area
- Difficulty over time
- Score based on Distance Traveled
- Dynamic Map Size (Allowed Player Area, Distance Between Obstacles)

Known Bugs:
- Collision between Player and Obstacle is super wonky at the moment, this isn't a code issue but rather an issue of me not fully understanding how collisions works within Unreal Engine.
- Highscore not sorting in the correct order until the list is full
- Player will get knocked back off the allowed play area due to collisions with objects.
(The mesh the player uses is a cone that was added through the BP not the code, forgot to change it and I'm sure it's the biggest reasons for my issues)

Known Issues:
- No pause menu for easy restart.
- No Death Screen to showcase score/new Highscore.
- Obstacles don't use sweeping when moving.
- Player Character isn't sweeping when input is null.
- Really Hard to die later in the game due to collision issue.
- Build already have high scores (This is due to me testing the build before release, sorry but I don't think anyone plays this for fun)
- The Players movement is restricted by invisible walls, I hate this with a passion but I don't know how to Clamp the Players Movement whilst using the **Character Movement component**.
- The cylinders that are the "floor" are just there to showcase that there's flooring of some kind. It's not meant to actually be touched by the player as they are a little space ship wos wos.

Planned Features:
- GamePad functionality.
- Boost Action.
- Pickups.
- Hostile NPC's.
- Player Will Use Projectile instead of Line Trace.
