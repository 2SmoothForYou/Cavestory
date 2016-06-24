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
#include "tile.h"
#include <vector>

class Graphics;
struct SDL_Texture;
struct SDL_Rect;
struct Tileset;

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
    Vector2 _tileSize;
    
    SDL_Texture* _backgroundTexture;
    
    std::vector<Tile> _tileList;
    std::vector<Tileset> _tilesets;
    
    void loadMap(std::string mapName, Graphics &graphics);
    
};

struct Tileset{
    
    SDL_Texture* Texture;
    int FirstGid;
    
    Tileset(){
        
        this->FirstGid = 1;
        
    }
    
    Tileset(SDL_Texture* texture, int firstGid){
        
        this->Texture = texture;
        this->FirstGid = firstGid;
        
    }
};

#endif /* level_h */
