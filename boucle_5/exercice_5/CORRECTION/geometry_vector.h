#pragma once

#include <math.h>
#include "coordinate.h"

namespace geometry {

class Vector {
public:
    float x, y;
    Vector(float x, float y) : x(x), y(y) {}
	
	float getMagnitude() {
		return std::sqrt(x * x + y * y);
	}
	
	Coordinate getPosition() {
		Coordinate c = { this->x, this->y };
		
		return c;
	}
};

};
