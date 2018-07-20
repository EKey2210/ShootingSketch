//
//  EnemyUnit.cpp
//  ShootingSketch
//
//  Created by EKey2210 on 2018/07/20.
//

#include "EnemyUnit.hpp"

EnemyUnit::EnemyUnit(float x,float y){
    this->position = vec2(x,y);
    this->velocity = vec2(1,-1);
    this->acceleration = vec2(0,0);
    this->radius = 20;
    this->angle = 0;
}

void EnemyUnit::update(){
    this->acceleration = vec2(ofRandom(-0.5,0.5),ofRandom(-0.5,0.5)); //test
    
    this->velocity += this->acceleration;
    this->position += this->velocity;
    
    this->acceleration *= 0;
    
    this->angle = atan2f(this->velocity.y, this->velocity.x) + HALF_PI;
    
}

void EnemyUnit::display(){
    ofSetColor(255,0,0);
    ofNoFill();
    ofPushMatrix();
    ofTranslate(this->position.x, this->position.y);
    ofRotateRad(this->angle);
    ofBeginShape();
    ofVertex(0,-this->radius*2);
    ofVertex(-this->radius,this->radius);
    ofVertex(this->radius,this->radius);
    ofEndShape(OF_CLOSE);
    ofPopMatrix();
}

