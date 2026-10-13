#include "../include/TeaFactory.hpp"
#include "../include/Tea.hpp"

std::unique_ptr<HotDrink> TeaFactory::make() const
{
	return std::make_unique<Tea>();
}
