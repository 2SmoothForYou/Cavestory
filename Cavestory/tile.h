//
//  tile.h
//  Cavestory
//
//  Created by Jaime Ricart on 6/23/16.
//  Copyright © 2016 Jaime Ricart. All rights reserved.
//

#ifndef tile_h
#define tile_h

#include "globals.h"

struct SDL_Texture;
class Graphics;

class Tile{
    
public:
    
    Tile();
    Tile(SDL_Texture* _tileset, Vector2 _size, Vector2 _tilesetPosition, Vector2 _position);
    
    void update(int elapsedTime);
    void draw(Graphics &graphics);
    
private:
   
    SDL_Texture* _tileset;
    Vector2 _size;
    Vector2 _tilesetPosition;
    Vector2 _position;
    
};

#endif /* tile_h */
