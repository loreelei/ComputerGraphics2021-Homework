#include "Ball.h"

Ball::Ball() {
	radius = ofRandom(10, 50);
	color = ofColor(ofRandom(255), ofRandom(255), ofRandom(255));
	position = ofVec2f(0, 0);
	windVelocity = ofVec2f(ofRandom(10), ofRandom(10));

}

void Ball::update(ofVec2f newWindVelocity) {
	windVelocity = newWindVelocity;
	position += windVelocity;
	wallHit();
}

void Ball::draw() {
	ofSetColor(color);
	ofDrawCircle(position, radius);
}

void Ball::wallHit() {
	//left wall
	if (position.x - radius <= 0) {
		position.x = radius;
		windVelocity.x = -windVelocity.x;
	}

	//right wall
	if (position.x + radius >= ofGetWidth()) {
		position.x = ofGetWidth() - radius;
		windVelocity.x = -windVelocity.x;
	}

	//top wall
	if (position.y - radius <= 0) {
		position.y = radius;
		windVelocity.y = -windVelocity.y;
	}

	//bottom wall
	if (position.y + radius >= ofGetHeight()) {
		position.y = ofGetHeight() - radius;
		windVelocity.y = -windVelocity.y;
	}
}