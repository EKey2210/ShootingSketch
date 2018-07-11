//
//  MyOwnUnit.cpp
//  ShootingSketch
//
//  Created by EKey2210 on 2018/07/04.
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
    this->acceleration = vec2(ofRandom(-0.5,0.5),ofRandom(-0.5,0.5)); //test
    
    this->velocity += this->acceleration;
    this->position += this->velocity;
    
    this->angle = atan2f(this->velocity.y, this->velocity.x) + HALF_PI;
    
    edgeCheck();
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

void MyOwnUnit::edgeCheck(){
    if(this->position.x < -this->radius){
        this->position.x = ofGetWidth() + this->radius;
    }
    
    if(this->position.x > ofGetWidth() + this->radius){
        this->position.x = -this->radius;
    }
    if(this->position.y < -this->radius){
        this->position.y = ofGetHeight() + this->radius;
    }
    
    if(this->position.y > ofGetHeight() + this->radius){
        this->position.y = -this->radius;
    }
}
