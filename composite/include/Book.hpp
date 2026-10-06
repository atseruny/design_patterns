#pragma once

#include "Product.hpp"

class Book : public Product
{
public:
	Book(int GetPrice);
	int GetPrice() const override;

private:
	int price;
};
