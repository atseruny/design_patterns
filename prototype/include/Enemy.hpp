#pragma once

#include <memory>

class Enemy
{
public:
	int health = 0;
	int damage = 0;

	virtual std::unique_ptr<Enemy> Clone() const = 0;
	virtual ~Enemy() = default;
};
