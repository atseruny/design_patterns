#include "../include/BurgerBuilder.hpp"

#include <stdexcept>
#include <utility>

void BurgerBuilder::setBun(std::string bun)
{
    draft_.bun_ = std::move(bun);
}

void BurgerBuilder::setPatty(std::string patty)
{
    draft_.patty_ = std::move(patty);
}

void BurgerBuilder::addCheese()
{
    draft_.cheese_ = true;
}

void BurgerBuilder::addLettuce()
{
    draft_.lettuce_ = true;
}

void BurgerBuilder::addTomato()
{
    draft_.tomato_ = true;
}

void BurgerBuilder::addOnion()
{
    draft_.onion_ = true;
}

void BurgerBuilder::setSauce(std::string sauce)
{
    draft_.sauce_ = std::move(sauce);
}

Burger BurgerBuilder::build() const
{
    if (draft_.bun_.empty() || draft_.patty_.empty()) {
        throw std::invalid_argument("A burger requires a bun and a patty");
    }
    return draft_;
}
