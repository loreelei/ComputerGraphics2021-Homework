#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	numBalls = 10;

	for (int i = 0; i < numBalls; i++) {
		Ball tempBall;
		float tempWind;
		balls.push_back(tempBall);
		directions.push_back(ofVec2f(ofRandom(0, 2), ofRandom(0, 2)));
	}
}

//--------------------------------------------------------------
void ofApp::update(){

	for (int i = 0; i < numBalls; i++) {
		balls[i].update(w.updateWindVelocity(balls[i].windVelocity, directions[i]));

	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < numBalls; i++) {
		balls[i].draw();

		ofDrawBitmapString("Wind " + std::to_string(i) + " (x, y):", 10, 10 + i * 50);
		ofDrawBitmapString("(" + std::to_string(balls[i].windVelocity.x) + ", " + std::to_string(balls[i].windVelocity.x) + ")", 200, 10 + i * 50);

	}
	
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
