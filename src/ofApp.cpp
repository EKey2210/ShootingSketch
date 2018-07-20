#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofBackground(0);
    ofEnableSmoothing();
    
    this->player = new MyOwnUnit(ofGetWidth()/2,ofGetHeight()-100);
    this->enemy = new EnemyUnit(ofGetWidth()/2,ofGetHeight()-100);
}

//--------------------------------------------------------------
void ofApp::update(){
    this->player->update();
    this->enemy->update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    this->player->display();
    this->enemy->display();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == OF_KEY_UP){
        
    }
    if(key == OF_KEY_RIGHT){
        
    }
    if(key == OF_KEY_LEFT){
        
    }
//    if(key == OF_KEY_DOWN){
//
//    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
