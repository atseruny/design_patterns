#pragma once

#include "Burger.hpp"

class BurgerBuilder {
public:
    BurgerBuilder() = default;

    BurgerBuilder& setBun(std::string bun);
    BurgerBuilder& setPatty(std::string patty);
    BurgerBuilder& addCheese();
    BurgerBuilder& addLettuce();
    BurgerBuilder& addTomato();
    BurgerBuilder& addOnion();
    BurgerBuilder& setSauce(std::string sauce);
    Burger build() const;

private:
    // Keep construction state in one draft instead of duplicating product fields.
    Burger draft_;
};
