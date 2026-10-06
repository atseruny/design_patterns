#pragma once

#include "Product.hpp"

#include <memory>
#include <vector>

class ShoppingBag : public Product
{
public:
	void add(std::unique_ptr<Product> product);
	int GetPrice() const override;

private:
	std::vector<std::unique_ptr<Product>> products;
};
