#pragma once

#include "HotDrink.hpp"

#include <memory>

struct HotDrinkFactory
{
	virtual ~HotDrinkFactory() = default;
	virtual std::unique_ptr<HotDrink> make() const = 0;
};
