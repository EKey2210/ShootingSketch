//
//  Unit.hpp
//  ShootingSketch
//
//  Created by KiryuYamashita on 2018/07/04.
//

#ifndef Unit_hpp
#define Unit_hpp

#include <stdio.h>
#include "ofMain.h"

using namespace glm;

class Unit{
protected:
    vec2 position;
    vec2 velocity;
    vec2 acceleration;
    
    float radius;
    float angle;
public:
    virtual void update() = 0;
    virtual void display() = 0;
};
#endif /* Unit_hpp */
