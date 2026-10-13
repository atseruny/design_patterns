#pragma once

#include "HotDrink.hpp"

struct Tea : HotDrink
{
	void prepare(int volume) override;
};
