//
//  tile.cpp
//  Cavestory
//
//  Created by Jaime Ricart on 6/23/16.
//  Copyright © 2016 Jaime Ricart. All rights reserved.
//

#include "tile.h"
#include "graphics.h"

#include <SDL2/SDL.h>

Tile::Tile(){
    
}

Tile::Tile(SDL_Texture* tileset, Vector2 size, Vector2 tilesetPosition, Vector2 position):
        _tileset(tileset),
        _size(size),
        _tilesetPosition(tilesetPosition),
        _position(Vector2(position.x * globals::SPRITE_SCALE, position.y * globals::SPRITE_SCALE))
{
    
}

void Tile::update(int elapsedTime){
    
}

void Tile::draw(Graphics &graphics){
    
    SDL_Rect destRect = {this->_position.x, this->_position.y, static_cast<int>(this->_size.x * globals::SPRITE_SCALE), static_cast<int>(this->_size.y * globals::SPRITE_SCALE)};
    
    SDL_Rect sourceRect = {this->_tilesetPosition.x, this->_tilesetPosition.y, this->_size.x, this->_size.y};
    
    graphics.blitSurface(this->_tileset, &sourceRect, &destRect);
    
    
}
