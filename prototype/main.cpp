#include "include/Zombie.hpp"

#include <iostream>

int main()
{
	std::unique_ptr<Enemy> original = std::make_unique<Zombie>();
	original->health = 100;
	original->damage = 20;

	std::unique_ptr<Enemy> copy = original->Clone();

	std::cout << "Original: health = " << original->health << ", damage = " << original->damage << '\n';
	std::cout << "Clone: health = " << copy->health << ", damage = " << copy->damage << '\n';

	copy->health = 50;
	std::cout << "After modifying the clone: original health = " << original->health
			  << ", clone health = " << copy->health << '\n';
}
