//
//  animatedsprite.h
//  Cavestory
//
//  Created by Jaime Ricart on 6/21/16.
//  Copyright © 2016 Jaime Ricart. All rights reserved.
//

#ifndef animatedsprite_h
#define animatedsprite_h

#include "sprite.h"
#include <map>
#include <string>
#include "globals.h"
#include <vector>

class Graphics;

class AnimatedSprite : public Sprite{
    
public:
    
    AnimatedSprite();
    AnimatedSprite(Graphics &graphics, const std::string &filePath, int sourceX, int sourceY, int width, int height, float posX, float posY, float timeToUpdate);
    
    void playAnimation(std::string animation, bool once = false);
    
    void update(int elapsedTime);
    
    void draw(Graphics &graphics, int x, int y);
    
protected:
    
    double _timeToUpdate;
    bool _currentAnimationOnce;
    std::string _currentAnimation;
    
    void addAnimation(int frames, int x, int y, std::string name, int width, int height, Vector2 offset);
    
    void resetAnimations();
    
    virtual void setupAnimations() = 0;
    
    void stopAnimation();
    
    void setVisible(bool visible);
    
    virtual void animationDone(std::string currentAnimation) = 0;
    
private:
    
    std::map<std::string, std::vector<SDL_Rect>> _animations;
    std::map<std::string, Vector2> _offsets;
    
    int _frameIndex;
    double _timeElapsed;
    bool _visible;
    
};

#endif /* animatedsprite_h */
