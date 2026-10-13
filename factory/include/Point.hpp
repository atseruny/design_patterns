#pragma once

struct Point
{
	float x, y;

	friend class PointFactory;

private:
	Point(float x, float y);
};
