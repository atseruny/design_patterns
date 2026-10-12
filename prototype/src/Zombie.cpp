#include "../include/Zombie.hpp"

std::unique_ptr<Enemy> Zombie::Clone() const
{
	return std::make_unique<Zombie>(*this);
}
