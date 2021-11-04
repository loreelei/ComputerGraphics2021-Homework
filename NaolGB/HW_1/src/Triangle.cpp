#include "Triangle.h"

Triangle::Triangle() {
	width = ofRandom(50, 75);
	height = ofRandom(50, 75);

	p1.set(ofRandom(0, ofGetWidth()), ofGetHeight());
	p2.set(p1.x + (width/2), p1.y - height);
	p3.set(p1.x + width, p1.y);

	stepX = ofRandom(50, 100);
	stepY = ofRandom(50, 100);
}

void Triangle::update() {
	//Update with random parameters
	colors = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));

	width = ofRandom(50, 75);
	height = ofRandom(50, 75);

	p1.set(p1.x + stepX, p1.y - stepY);
	p2.set(p1.x + (width / 2), p1.y - height);
	p3.set(p1.x + width, p1.y);

	//Switch x's direction
	stepX = -stepX;

	if (p1.x < 0) {
		p1.x = 0;
		p2.x = p1.x + (width/2);
		p3.x = p1.x + width;
	}
	else if (p3.x > ofGetWidth()) {
		p3.x = ofGetWidth();
		p1.x = p3.x - width;
		p2.x = p3.x - (width / 2);
	}

	//Switch y's direction
	if (p2.y <= 0) {
		p2.y = 0;
		p1.y = p2.y + height;
		p3.y = p2.y + height;

		stepY = -stepY;
	}
	else if (p1.y >= ofGetHeight()) {
		p1.y = ofGetHeight();
		p2.y = p1.y - height;
		p3.y = p1.y;

		stepY = -stepY;
	}

}

void Triangle::draw() {
	ofSetColor(colors);
	ofDrawTriangle(p1, p2, p3);
}