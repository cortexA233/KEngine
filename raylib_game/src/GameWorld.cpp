#include "headers/GameWorld.h"


void GameWorld::Tick(float deltaTime)
{
    for (auto element : gameObjectPool)
    {
        element->Tick(deltaTime);
    }
}


void GameWorld::AddGameObject(GameObject* gameObject)
{
    gameObjectPool.push_back(gameObject);
}


void GameWorld::RemoveGameObject(GameObject* gameObject)
{
    gameObjectPool.erase(std::remove(gameObjectPool.begin(), gameObjectPool.end(), gameObject), gameObjectPool.end());
    
}