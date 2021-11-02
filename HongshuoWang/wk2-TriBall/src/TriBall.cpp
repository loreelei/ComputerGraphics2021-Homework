#include "TriBall.h"

TriBall::TriBall() {

	// nothing needed here, because all variables are initialized in parent Ball class
}

void TriBall::draw() {

	ofSetColor(color);	// the color carries over from the parent Ball class

	float top1 = x; // rectangles draw from the top left corner unlike circles (which draw from the center), so we need to compensate
	float top2 = y + radius;
	float left1 = x - radius * sqrt(3) / 2;
	float left2 = y - radius / 2;
	float right1 = x + radius * sqrt(3) / 2;
	float right2 = y - radius / 2;
	ofDrawTriangle(top1, top2, left1, left2, right1, right2);  // width and height will both be double the radius
}