#pragma once
#include <map>
#include <memory>
#include <string>
#include <unordered_map>

#include "raylib.h"

class ResourcesManager
{
public:
    using TexturePtr = std::shared_ptr<Texture>;
    
    TexturePtr GetOrLoadTexture(const std::string& name);

private:
    std::unordered_map<std::string, TexturePtr> texturePool;
    
};
