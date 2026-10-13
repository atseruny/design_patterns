#pragma once

#include "HotDrinkFactory.hpp"

struct CoffeeFactory : HotDrinkFactory
{
	std::unique_ptr<HotDrink> make() const override;
};
