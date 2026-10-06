#pragma once

#include <cstdint>
#include <iostream>
#include <iomanip>
#include <memory>
#include <utility>

class Product
{
public:
	virtual ~Product() = default;
	virtual int GetPrice() const = 0;
};
