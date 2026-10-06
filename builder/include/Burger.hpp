#pragma once

#include <string>

class BurgerBuilder;

class Burger {
public:
    const std::string& getBun() const noexcept;
    const std::string& getPatty() const noexcept;
    bool hasCheese() const noexcept;
    bool hasLettuce() const noexcept;
    bool hasTomato() const noexcept;
    bool hasOnion() const noexcept;
    const std::string& getSauce() const noexcept;

private:
    friend class BurgerBuilder;
    Burger() = default;

    std::string bun_;
    std::string patty_;
    bool cheese_ = false;
    bool lettuce_ = false;
    bool tomato_ = false;
    bool onion_ = false;
    std::string sauce_;
};

