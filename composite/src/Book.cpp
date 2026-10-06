#include "../include/Book.hpp"

#include <stdexcept>

Book::Book(int GetPrice) : price(GetPrice)
{
	if (GetPrice < 0)
	{
		throw std::invalid_argument("A book price cannot be negative");
	}
}

int Book::GetPrice() const
{
	return price;
}
