#ifndef BURGER_BUILDER_H
#define BURGER_BUILDER_H

#include "Burger.h"

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

#endif
