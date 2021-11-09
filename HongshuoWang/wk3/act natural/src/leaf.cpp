#include "leaf.h"
#include "math.h"

leaf::leaf(){
	time = 0;
	posX = ofRandom(10, 900);
	posY = ofRandom(50, 100);
}

void leaf::update() {
	time++;

	if (time % 4 == 1) { posX = posX + cos(time  * PI / 180); }
	else { posX = posX + 2 * sin(time  * PI / 180); }
	
	if (time % 4 == 0) { posX = posX + 1 * ofRandom(-1, 1) * ofNoise(1); }
	posY += gravity;
}


void leaf::draw() {
	ofDrawEllipse(posX, posY, 40,20);
	ofSetColor(50, 180, 0);
}

void leaf::reset() {
	posY = ofRandom(50, 100);
}