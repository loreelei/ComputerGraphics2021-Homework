#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(255);
	ofSetLineWidth(2.0);  // Line widths apply to polylines

	curvedSegmentPolyline.curveTo(450, 530);  // These curves are Catmull-Rom splines
	curvedSegmentPolyline.curveTo(450, 530);  // Necessary Duplicate for Control Point
	curvedSegmentPolyline.curveTo(500, 560);
	curvedSegmentPolyline.curveTo(550, 530);
	curvedSegmentPolyline.curveTo(550, 530);
}

//--------------------------------------------------------------
void ofApp::update(){

	if (time >= 120) { time = 0; }
	else time++;
	
	color = ofMap(time, 0, 120, 0, 255);
}

//--------------------------------------------------------------
void ofApp::draw(){	
	ofSetColor(255, 100, 0);
	
	ofNoFill();

	ofDrawRectangle(300, 300, 400,300); //face
	ofDrawTriangle(360,300, 400, 300, 380, 250); // left ear
	ofDrawTriangle(600,300, 640, 300, 620, 250); //right ear
	curvedSegmentPolyline.draw();  // mouse

	ofFill();



	ofSetColor(color, 128, 128);
	ofDrawEllipse(400, 400, 50, 75); //left eye
	ofDrawEllipse(600, 400, 50, 75); //right eye
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
