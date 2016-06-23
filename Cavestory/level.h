//
//  level.h
//  Cavestory
//
//  Created by Jaime Ricart on 6/23/16.
//  Copyright © 2016 Jaime Ricart. All rights reserved.
//

#ifndef level_h
#define level_h

#include "globals.h"
#include <string>

class Graphics;
struct SDL_Texture;

class Level{
    
public:
    
    Level();
    Level(std::string mapName, Vector2 spawnPoint, Graphics &graphics);
    ~Level();
    
    void update(int elapsedTime);
    void draw(Graphics &graphics);
    
private:
    
    std::string _mapName;
    Vector2 _spawnPoint;
    
    Vector2 _size;
    
    SDL_Texture* _backgroundTexture;
    
    void loadMap(std::string mapName, Graphics &graphics);
    
};

#endif /* level_h */
