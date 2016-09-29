#pragma once

#include "ofMain.h"

class Particle
{

public:
	virtual void reset();
	virtual void update();
	virtual void draw();		
	
	ofPoint pos;
	ofPoint vel;
	ofPoint frc;
};
