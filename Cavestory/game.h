//
//  game.h
//  Cavestory
//
//  Created by Jaime Ricart on 6/21/16.
//  Copyright © 2016 Jaime Ricart. All rights reserved.
//

#ifndef game_h
#define game_h

#include "sprite.h"

class Graphics;

class Game{
    
public:
    
    Game();
    ~Game();
    
private:
    
    void gameLoop();
    void draw(Graphics &graphics);
    void update(float elapsedTime);
    
    Sprite _player;
    
};

#endif /* game_h */
