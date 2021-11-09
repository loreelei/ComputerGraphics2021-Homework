#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetCircleResolution(10);
	ofSetBackgroundColor(ofColor(80, 254, 152));
	radius = 20;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	float time = ofGetElapsedTimef();
	
	ofPushMatrix();

	ofTranslate(
		ofMap(ofGetMouseX(), 0, ofGetWidth(), -100, 100),
		ofMap(ofGetMouseY(), 0, ofGetHeight(), -100, 100)
	);

	for (int i = (ofGetWidth()/2) - (ofGetWidth() / 3); i < (ofGetWidth() / 2) + (ofGetWidth() / 3); i += 1) {
		for (int j = 0; j < 13; j++) {
			if (j % 2 == 0) {
				ofSetColor(ofColor(187,19,62));
			}
			else {
				ofSetColor(ofColor(255));
			}
			ofDrawCircle(i, ofGetHeight() / 4 + 50 * sin(i*0.01 + time) + radius*j, radius);
		}
	}
	ofPopMatrix();

	string line1 = "Movement: Flag flapping up and down";
	string line2 = "Wind direction: from right to left";
	string line3 = "Control placement: mouse";
	string label = line1 + "\n" + line2 + "\n" + line3;
	ofDrawBitmapStringHighlight(label, 20, 20);
	
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
