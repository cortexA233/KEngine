#pragma once
#include <map>
#include <memory>
#include <string>
#include <unordered_map>

#include "raylib.h"

class ResourcesManager
{
public:
    
    std::shared_ptr<Texture> GetOrLoadTexture(const std::string& name);

private:
    std::unordered_map<std::string, std::shared_ptr<Texture>> texturePool;
    
};
