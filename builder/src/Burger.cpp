#include "../include/Burger.hpp"

const std::string& Burger::getBun() const noexcept { return bun_; }
const std::string& Burger::getPatty() const noexcept { return patty_; }
bool Burger::hasCheese() const noexcept { return cheese_; }
bool Burger::hasLettuce() const noexcept { return lettuce_; }
bool Burger::hasTomato() const noexcept { return tomato_; }
bool Burger::hasOnion() const noexcept { return onion_; }
const std::string& Burger::getSauce() const noexcept { return sauce_; }
