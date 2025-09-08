#include "headers/GameWorld.h"


void GameWorld::Tick(float deltaTime)
{
    for (auto element : gameObjectPool)
    {
        element->Tick(deltaTime);
    }
}
