#include "headers/ResourcesManager.h"
#include "raylib.h"


std::shared_ptr<Texture> ResourcesManager::GetOrLoadTexture(const std::string& name)
{
    if (texturePool.find(name) != texturePool.end())
    {
        return texturePool[name];
    }

    Texture texture = LoadTexture(name.c_str());
    std::shared_ptr<Texture> newTexture = std::shared_ptr<Texture>(new Texture(texture), [](const Texture* texture){
        if (texture)
        {
            UnloadTexture(*texture);
            delete texture;
        }
    });

    texturePool[name] = newTexture;
    return newTexture;
}
