#pragma once

#include "ofMain.h"

class Triangle {
public:
	Triangle();

	void update();
	void draw();

	float stepX, stepY, width, height;
	ofVec2f p1, p2, p3;

	ofColor colors;
};
