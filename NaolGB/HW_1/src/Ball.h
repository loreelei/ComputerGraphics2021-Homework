#pragma once

#include "ofMain.h"

class Ball {
public:
	Ball();

	void update();
	void draw();

	float radius, x, y, stepX, stepY;

	ofColor colors;
};
