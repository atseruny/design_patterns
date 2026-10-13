#include "../include/Coffee.hpp"

#include <iostream>

void Coffee::prepare(int volume)
{
	std::cout << "Grind coffee beans, boil water, pour " << volume
			  << " ml, add some milk\n";
}
