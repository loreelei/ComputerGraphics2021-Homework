#include "wind.h"

Wind::Wind() {}

ofVec2f Wind::updateWindVelocity(ofVec2f velocity, ofVec2f direction) {
	velocity.x += ofRandom(direction.x);
	velocity.y += ofRandom(direction.y);

	return velocity;
}