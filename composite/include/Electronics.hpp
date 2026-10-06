#pragma once

#include "Product.hpp"

class Electronics : public Product
{
public:
	explicit Electronics(int GetPrice);
	int GetPrice() const override;

private:
	int price;
};
