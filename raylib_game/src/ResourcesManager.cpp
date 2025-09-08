#include "headers/ResourcesManager.h"
#include "raylib.h"


ResourcesManager::TexturePtr ResourcesManager::GetOrLoadTexture(const std::string& name)
{
    if (texturePool.find(name) != texturePool.end())
    {
        return texturePool[name];
    }

    Texture texture = LoadTexture(name.c_str());
    TexturePtr newTexture = TexturePtr(new Texture(texture), [](const Texture* texture){
        if (texture)
        {
            UnloadTexture(*texture);
            delete texture;
        }
    });

    texturePool[name] = newTexture;
    return newTexture;
}
