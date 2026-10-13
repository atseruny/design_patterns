#pragma once

#include "HotDrink.hpp"

struct Coffee : HotDrink
{
	void prepare(int volume) override;
};
