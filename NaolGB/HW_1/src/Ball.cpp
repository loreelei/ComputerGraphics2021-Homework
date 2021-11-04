#include "Ball.h"

Ball::Ball() {
	x = ofRandom(0, ofGetWidth());
	y = ofGetHeight();

	stepX = ofRandom(50, 100);
	stepY = ofRandom(50, 100);
	
}

void Ball::update() {
	//Update with random parameters

	radius = ofRandom(25, 50);
	colors = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));


	x += stepX;
	y += stepY;

	//Switch x's direction
	stepX = -stepX;

	if (x <= radius) {
		x = radius;
	}
	else if (x >= ofGetWidth() - radius) {
		x = ofGetWidth() - radius;
	}

	//Switch y's direction
	if (y <= radius) {
		y = radius;
		stepY = -stepY;
	}
	else if (y >= ofGetHeight() - radius) {
		y = ofGetHeight() - radius;
		stepY = -stepY;
	}

}

void Ball::draw() {
	ofSetColor(colors);
	ofDrawCircle(x, y, radius);
}