#include "include/PointFactory.hpp"

#include <cmath>
#include <iostream>

int main()
{
	const float pi = std::acos(-1.0f);

	auto cartesian = PointFactory::NewCartesian(3, 4);
	auto polar = PointFactory::NewPolar(5, pi / 4);

	std::cout << "Cartesian: " << cartesian.x << ", " << cartesian.y << '\n';
	std::cout << "Polar: " << polar.x << ", " << polar.y << '\n';
}
