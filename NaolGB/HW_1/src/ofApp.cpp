#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	startFrameRate = 8;
	ofSetFrameRate(startFrameRate);

	ofBackground(47, 221, 146);
	ofSetCircleResolution(1080);

	font.load("arial.ttf", 24);
	text1 = "Hey, press and see the magic happen :)";
	text2 = "C for circle, S for square, T for triangle.";
	text3 = "Right click to clear the screen.";
}

//--------------------------------------------------------------
void ofApp::update(){

	for (int i = 0; i < balls.size(); i++) {
		balls[i].update();
	}
	for (int i = 0; i < triangles.size(); i++) {
		triangles[i].update();
	}
	for (int i = 0; i < squares.size(); i++) {
		squares[i].update();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){

	for (int i = 0; i < balls.size(); i++) {
		balls[i].draw();
	}
	for (int i = 0; i < triangles.size(); i++) {
		triangles[i].draw();
	}
	for (int i = 0; i < squares.size(); i++) {
		squares[i].draw();
	}

	ofSetColor(255);
	font.drawString(text1, (ofGetWidth() / 2) - (font.stringWidth(text1)/2), ofGetHeight() / 2);
	font.drawString(text2, (ofGetWidth() / 2) - (font.stringWidth(text2) / 2), ofGetHeight() / 2 + font.stringHeight(text1) + 16);
	font.drawString(text3, (ofGetWidth() / 2) - (font.stringWidth(text3) / 2), ofGetHeight() / 2 + font.stringHeight(text2) + 64);


}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'c' | key == 'C') {
		Ball b;
		balls.push_back(b);
	}
	if (key == 's' | key == 'S') {
		Square s;
		squares.push_back(s);
	}
	if (key == 't' | key == 'T') {
		Triangle t;
		triangles.push_back(t);
	}
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
	if (button == OF_MOUSE_BUTTON_RIGHT) {
		balls.clear();
		squares.clear();
		triangles.clear();
	}
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
