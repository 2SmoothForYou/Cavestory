//
//  sprite.h
//  Cavestory
//
//  Created by Jaime Ricart on 6/21/16.
//  Copyright © 2016 Jaime Ricart. All rights reserved.
//

#ifndef sprite_h
#define sprite_h

#include <SDL2/SDL.h>
#include <string>

class Graphics;

class Sprite{
    
public:
    Sprite();
    Sprite(Graphics &graphics, const std::string &filePath, int sourceX, int sourceY, int width, int height, float posX, float posY);
    
    virtual ~Sprite();
    virtual void update();
    
    void draw(Graphics &graphics, int x, int y);
   
protected:
    SDL_Rect _sourceRect;
    SDL_Texture* _spriteSheet;
    
    float _x, _y;
    
private:
    
};

#endif /* sprite_h */
