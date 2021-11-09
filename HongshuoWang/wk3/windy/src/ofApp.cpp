#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofBackground(0);
    
    wind1 = ofVec2f(1,1); // start with no gravity force
	wind2 = ofVec2f(-1, 1);
	wind3 = ofVec2f(1, -1);
	wind4 = ofVec2f(-1, -1);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // mouse position alters gravity
	force = ofRandom(0, 1) * wind1 + ofRandom(0, 1) * wind2 + ofRandom(0, 1) * wind3 + ofRandom(0, 1) * wind4;


	ball1.update(force); // apply gravity to balls
	ball2.update(force);
	ball3.update(force);
	ball4.update(force);
	ball5.update(force);

}

//--------------------------------------------------------------
void ofApp::draw(){

	ball1.draw();
	ball2.draw();
	ball3.draw();
	ball4.draw();
	ball5.draw();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
