//
//  Particle.hpp
//  ShootingSketch
//
//  Created by EKey2210 on 2018/07/13.
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>
#include "ofMain.h"

using namespace glm;

class Particle{
protected:
    vec2 position;
    vec2 velocity;
    vec2 acceleration;
    
    float radius;
    float angle;
    float lifeSpan;
public:
    virtual void update() = 0;
    virtual void display() = 0;
};

#endif /* Particle_hpp */
