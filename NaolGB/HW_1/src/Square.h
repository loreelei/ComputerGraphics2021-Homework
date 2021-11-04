#pragma once

#include "ofMain.h"

class Square {
public:
	Square();

	void update();
	void draw();

	float x, y, stepX, stepY, width, height;

	ofColor colors;
};
