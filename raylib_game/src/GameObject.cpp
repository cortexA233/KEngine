#include "headers/GameObject.h"
#include "raylib.h"


GameObject::GameObject()
{
    // sprite = nullptr;
}

GameObject::~GameObject()
{
    UnloadTexture(sprite);
}

void GameObject::Tick(float deltaTime)
{
    
}

