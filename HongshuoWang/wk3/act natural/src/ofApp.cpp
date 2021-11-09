#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetBackgroundColor(0);

	int num = 15;

	// fill our vector
	for (int i = 0; i < num; i++) {		// loop 30 times

		leaf tempLeaf;					// create a temporary ball
		leaves.push_back(tempLeaf);		// copy the temporary ball into the balls vector
										// (push_back() adds the ball to the end of the vector, increasing the vector's size by 1)
	}
}

//--------------------------------------------------------------1
void ofApp::update(){
	for (int i = 0; i < leaves.size(); i++) {

		leaves[i].update();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){

	for (int i = 0; i < leaves.size(); i++) {

		leaves[i].draw();
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
	for (int i = 0; i < leaves.size(); i++) {

		leaves[i].reset();
	}
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
