#include "../include/Electronics.hpp"

#include <stdexcept>

Electronics::Electronics(int GetPrice) : price(GetPrice)
{
	if (GetPrice < 0)
	{
		throw std::invalid_argument("An electronics price cannot be negative");
	}
}

int Electronics::GetPrice() const
{
	return price;
}
