#include "include/Chef.hpp"

#include <iostream>

int main()
{
	Chef chef;
	BurgerBuilder builder;
	const Burger burger = chef.cook(builder);
	std::cout << "Burger: " << burger.getBun() << " bun, " << burger.getPatty() << " patty, sauce: " << burger.getSauce() << '\n'
			  << std::boolalpha << "Cheese: " << burger.hasCheese() << ", lettuce: " << burger.hasLettuce()
			  << ", tomato: " << burger.hasTomato() << ", onion: " << burger.hasOnion() << '\n';
}
