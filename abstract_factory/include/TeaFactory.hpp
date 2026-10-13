#pragma once

#include "HotDrinkFactory.hpp"

struct TeaFactory : HotDrinkFactory
{
	std::unique_ptr<HotDrink> make() const override;
};
