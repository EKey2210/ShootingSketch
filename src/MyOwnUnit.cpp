//
//  MyOwnUnit.cpp
//  ShootingSketch
//
//  Created by KiryuYamashita on 2018/07/04.
//

#include "MyOwnUnit.hpp"

MyOwnUnit::MyOwnUnit(float x,float y){
    this->position = vec2(x,y);
    this->velocity = vec2(1,-1);
    this->acceleration = vec2(0,0);
    this->radius = 20;
    this->angle = 0;
}

void MyOwnUnit::update(){
    this->velocity += this->acceleration;
    this->position += this->velocity;
    
    this->angle = atan2f(this->velocity.y, this->velocity.x) + HALF_PI;
}

void MyOwnUnit::display(){
    ofSetColor(255);
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
