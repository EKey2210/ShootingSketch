//
//  ParticleSystem.hpp
//  ShootingSketch
//
//  Created by EKey2210 on 2018/07/13.
//

#ifndef ParticleSystem_hpp
#define ParticleSystem_hpp

#include <stdio.h>
#include "ofMain.h"
#include "Particle.hpp"

using namespace glm;

class ParticleSystem{
    
protected:
    vec2 position;
    vec2 velocity;
    vec2 acceleration;
    
    vector<Particle*> particles;
    
public:
    virtual void update() = 0;
    virtual void display() = 0;
};
#endif /* ParticleSystem_hpp */
