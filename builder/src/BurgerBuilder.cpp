#include "BurgerBuilder.h"

#include <stdexcept>
#include <utility>

BurgerBuilder& BurgerBuilder::setBun(std::string bun) {
    draft_.bun_ = std::move(bun);
    return *this;
}

BurgerBuilder& BurgerBuilder::setPatty(std::string patty) {
    draft_.patty_ = std::move(patty);
    return *this;
}

BurgerBuilder& BurgerBuilder::addCheese() {
    draft_.cheese_ = true;
    return *this;
}

BurgerBuilder& BurgerBuilder::addLettuce() {
    draft_.lettuce_ = true;
    return *this;
}

BurgerBuilder& BurgerBuilder::addTomato() {
    draft_.tomato_ = true;
    return *this;
}

BurgerBuilder& BurgerBuilder::addOnion() {
    draft_.onion_ = true;
    return *this;
}

BurgerBuilder& BurgerBuilder::setSauce(std::string sauce) {
    draft_.sauce_ = std::move(sauce);
    return *this;
}

Burger BurgerBuilder::build() const {
    if (draft_.bun_.empty() || draft_.patty_.empty()) {
        throw std::invalid_argument("A burger requires a bun and a patty");
    }
    return draft_;
}
