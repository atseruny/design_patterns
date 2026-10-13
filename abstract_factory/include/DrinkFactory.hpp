#pragma once

#include "HotDrinkFactory.hpp"

#include <map>
#include <string>

class DrinkFactory
{
	std::map<std::string, std::unique_ptr<HotDrinkFactory>> hot_factories;

public:
	DrinkFactory();
	std::unique_ptr<HotDrink> make_drink(const std::string& name, int volume) const;
};
