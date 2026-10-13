#pragma once

#include "Burger.hpp"

class BurgerBuilder
{
public:
	BurgerBuilder() = default;

	void setBun(std::string bun);
	void setPatty(std::string patty);
	void addCheese();
	void addLettuce();
	void addTomato();
	void addOnion();
	void setSauce(std::string sauce);
	Burger build() const;

private:
	Burger draft_;
};
