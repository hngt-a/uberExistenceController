#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetDataPathRoot("../Resources/data/"); //release version only
    ofBackground(0, 0, 0);
    
    go.load("go.mp3");
    stop.load("stop.mp3");
    right.load("right.mp3");
    left.load("left.mp3");
    back.load("back.mp3");
    forward.load("pin.mp3");//SE
    lookRight.load("look-right.mp3");
    lookLeft.load("look-left.mp3");
    lookUp.load("look-up.mp3");
    lookDown.load("look-down.mp3");
    
    step.load("step_1.wav");//SE
    step.setLoop(true);
    oneStep.load("step_2.wav");//SE
    
    str = "BODY DIRECTION & WALK: \n\nw (pressed): walk \nd: rightward \na: leftward \ns: backward \n\n\nHEAD DIRECTION: \n \nKEY_RIGHT: look right \nKEY_LEFT: look left \nKEY_UP: look up \nKEY_DOWN: look down \nKEY_SPACE: look forward";

}

//--------------------------------------------------------------
void ofApp::update(){
    if(bbStep == false && bStep == true){ go.play(); step.play();}
    else if(bbStep == true && bStep == false){ step.stop(); stop.play();}
    
    bbStep = bStep;
    
    ofSetWindowTitle(ofToString(ofGetFrameRate(), 0));

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 0, 255);
    ofDrawBitmapStringHighlight(str, 50, 50, ofColor(110,180,80));
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'w') bStep=true;
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    if(key == 'w'){ bStep=false;}
    if(key == 'a'){ left.play(); oneStep.play();}
    if(key == 'd'){ right.play(); oneStep.play();}
    if(key == 's'){ back.play(); oneStep.play();}
    
    if(key == OF_KEY_UP) lookUp.play();
    if(key == OF_KEY_DOWN) lookDown.play();
    if(key == OF_KEY_LEFT) lookLeft.play();
    if(key == OF_KEY_RIGHT) lookRight.play();
    if(key == ' ') forward.play();
    

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
