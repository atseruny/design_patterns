#pragma once

#include "Enemy.hpp"

class Zombie : public Enemy
{
public:
	std::unique_ptr<Enemy> Clone() const override;
};
