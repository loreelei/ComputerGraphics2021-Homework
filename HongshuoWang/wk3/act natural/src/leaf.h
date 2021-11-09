#pragma once
#include "ofMain.h"		// ofMain.h lets our Ball "see" openFrameworks

class leaf {

public:		// other classes can access the following functions & variables:

	leaf();				// "constructor" function - required for every class
						// this is automatically called whenever we create a new ball

	void update();
	void draw();
	void reset();

	float posX, posY;	
	float size;
	int time;

	ofColor color;
	float gravity = 1;	
};