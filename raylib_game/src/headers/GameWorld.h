#pragma once
#include <vector>

#include "GameObject.h"

class GameWorld
{
public:
    std::vector<GameObject*> gameObjectPool;

    void Tick(float deltaTime);

    void AddGameObject(GameObject* gameObject);

    void RemoveGameObject(GameObject* gameObject);
};
