#pragma once

#include "Point.hpp"
#include <cmath>

class PointFactory
{
public:
	static Point NewCartesian(float x, float y);
	static Point NewPolar(float r, float theta);
};
