#pragma once

#include "ofMain.h"
#include "wind.h"

class Ball {
	public:
		Ball();
	
		void update(ofVec2f newWindVelocity);
		void draw();

		void wallHit();
		
		float radius;
		ofVec2f position, windVelocity;
		ofColor color;

};