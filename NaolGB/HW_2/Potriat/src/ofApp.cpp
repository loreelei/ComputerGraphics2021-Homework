#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
}

//--------------------------------------------------------------
void ofApp::update(){
	numOfPixels = int(ofMap(ofGetMouseY(), 50, ofGetHeight(), 10, 15));
	numOfCols = numOfPixels;

	boxSizeX = ofGetWidth() / numOfPixels;
	boxSizeY = ofGetHeight() / numOfPixels;

	grid.empty();

	for (int x = 0; x < numOfPixels; x++) {
		for (int y = 0; y < numOfPixels; y++) {
			grid.push_back(ofVec2f(x * boxSizeX, y * boxSizeY));
		}
	}


}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetBackgroundAuto(false);

	ofSetBackgroundColor(0);

	float factor = numOfPixels / numOfCols;
	float noise = ofMap(ofGetMouseX(), 0, ofGetWidth(), 0.1, 1);

	for (int i = 0; i < numOfCols; i++) {
		for (int j = i * numOfPixels*factor; j < (i + 1)*numOfPixels*factor; j++) {

			float colorFactor = ofMap(i, 0, numOfCols, 200, 0);

			int h = noise * colorFactor;
			int s = noise * colorFactor;
			int b = 255;

			ofSetColor(ofColor::fromHsb(h, s, b));

			ofDrawRectangle(grid[j], boxSizeX, boxSizeY);
		}
	}

	string line1 = "mouse x: color noise";
	string line2 = "mouse y: number of grids and columns";
	string label = line1 + "\n" + line2;
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
