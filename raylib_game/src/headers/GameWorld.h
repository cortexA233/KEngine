#pragma once
#include <vector>

#include "GameObject.h"

class GameWorld
{
public:
    std::vector<GameObject*> gameObjectPool;

    void Tick(float deltaTime);
};
