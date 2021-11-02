#include "Ball.h"
#include "ofMain.h"

class TriBall : public Ball {  // SquareBall class **inherits** from Ball class

public:

	TriBall();

	void draw(); // this will **override** the draw function inherited from Ball

};