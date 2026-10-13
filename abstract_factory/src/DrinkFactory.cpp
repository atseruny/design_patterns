#include "../include/DrinkFactory.hpp"
#include "../include/CoffeeFactory.hpp"
#include "../include/TeaFactory.hpp"

DrinkFactory::DrinkFactory()
{
	hot_factories["coffee"] = std::make_unique<CoffeeFactory>();
	hot_factories["tea"] = std::make_unique<TeaFactory>();
}

std::unique_ptr<HotDrink> DrinkFactory::make_drink(const std::string& name, int volume) const
{
	auto drink = hot_factories.at(name)->make();
	drink->prepare(volume);
	return drink;
}
