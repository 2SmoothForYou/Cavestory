//
//  graphics.h
//  Cavestory
//
//  Created by Jaime Ricart on 6/21/16.
//  Copyright © 2016 Jaime Ricart. All rights reserved.
//

#ifndef graphics_h
#define graphics_h

#include <map>
#include <string>
#include <SDL2_image/SDL_image.h>
#include <SDL2/SDL.h>

struct SDL_Window;
struct SDL_Renderer;

class Graphics {
    
public:
    
    Graphics();
    ~Graphics();
    
    SDL_Surface* loadImage(const std::string &filePath);
    
    void blitSurface(SDL_Texture* source, SDL_Rect* sourceRectangle, SDL_Rect* destinationRectangle);
    
    void flip();
    
    void clear();
    
    SDL_Renderer* getRenderer() const;
    
private:
    
    SDL_Window* _window;
    SDL_Renderer* _renderer;
    
    std::map<std::string, SDL_Surface*> _spriteSheets;
    
};


#endif /* graphics_h */
