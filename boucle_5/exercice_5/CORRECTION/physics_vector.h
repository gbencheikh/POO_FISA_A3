#pragma once

#include <math.h>
#include "coordinate.h"

namespace physics {

class Vector {
public:
    float magnitude, angle;
    Vector(float magnitude, float angle) : magnitude(magnitude), angle(angle) {}
	
	float getMagnitude() {
		return magnitude;
	}
	
	Coordinate getPosition() {
		Coordinate c = { magnitude * std::cos(angle), magnitude * std::sin(angle) };
		
		return c;
	}
};

};