#include "../include/CoffeeFactory.hpp"
#include "../include/Coffee.hpp"

std::unique_ptr<HotDrink> CoffeeFactory::make() const
{
	return std::make_unique<Coffee>();
}
