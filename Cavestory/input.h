//
//  input.h
//  Cavestory
//
//  Created by Jaime Ricart on 6/21/16.
//  Copyright © 2016 Jaime Ricart. All rights reserved.
//

#ifndef input_h
#define input_h

#include <map>
#include <SDL2/SDL.h>

class Input{
    
public:
    
    void beginNewFrame();
    void keyUpEvent(const SDL_Event& event);
    void keyDownEvent(const SDL_Event& event);
    
    bool wasKeyPressed(SDL_Scancode key);
    bool wasKeyReleased(SDL_Scancode key);
    bool isKeyHeld(SDL_Scancode key);
    
private:
    
    std::map<SDL_Scancode, bool> _heldKeys;
    std::map<SDL_Scancode, bool> _pressedKeys;
    std::map<SDL_Scancode, bool> _releasedKeys;
    
};

#endif /* input_h */
