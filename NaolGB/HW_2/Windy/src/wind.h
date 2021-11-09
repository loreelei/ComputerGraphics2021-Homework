#pragma once

#include "ofMain.h"

class Wind {
	public:
		Wind();

		ofVec2f updateWindVelocity(ofVec2f velocity, ofVec2f direction);
};
