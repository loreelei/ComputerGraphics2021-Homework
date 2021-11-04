#include "Square.h"

Square::Square() {
	width = ofRandom(50, 75);
	height = width;

	x = ofRandom(0, ofGetWidth());
	y = ofGetHeight();

	stepX = ofRandom(50, 100);
	stepY = ofRandom(50, 100);
}

void Square::update() {
	//Update with random parameters
	colors = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));

	width = ofRandom(50, 75);
	height = width;

	x += stepX;
	y += stepY;

	//Switch x's direction
	stepX = -stepX;

	if (x <= 0) {
		x = 0;
	}
	else if (x >= ofGetWidth() - width) {
		x = ofGetWidth() - width;
	}

	//Switch y's direction
	if (y <= 0) {
		y = 0;
		stepY = -stepY;
	}
	else if (y >= ofGetHeight() - height) {
		y = ofGetHeight() - height;
		stepY = -stepY;
	}

}

void Square::draw() {
	ofSetColor(colors);
	ofDrawRectangle(x, y, height, width);
}