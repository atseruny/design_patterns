#include "include/DrinkFactory.hpp"

int main()
{
	DrinkFactory factory;

	auto tea = factory.make_drink("tea", 200);
	auto coffee = factory.make_drink("coffee", 50);
}
