#include "../include/ShoppingBag.hpp"

#include <limits>
#include <stdexcept>
#include <utility>

void ShoppingBag::add(std::unique_ptr<Product> product)
{
	if (!product)
	{
		throw std::invalid_argument("Cannot add a null product");
	}
	products.push_back(std::move(product));
}

int ShoppingBag::GetPrice() const
{
	int total = 0;
	for (const auto &product : products)
	{
		const auto price = product->GetPrice();
		if (price > std::numeric_limits<int>::max() - total)
		{
			throw std::overflow_error("Shopping bag total is too large");
		}
		total += price;
	}
	return total;
}
