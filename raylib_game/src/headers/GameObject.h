#pragma once
#include "raylib.h"

class GameObject
{
public:
    Texture sprite;

    GameObject();
    virtual ~GameObject();

    virtual void Tick(float deltaTime);
};
