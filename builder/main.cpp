#include "BurgerBuilder.h"

#include <iostream>

int main() {
    const Burger burger = BurgerBuilder()
        .setBun("sesame")
        .setPatty("beef")
        .addCheese()
        .addLettuce()
        .addTomato()
        .addOnion()
        .setSauce("mustard")
        .build();

    std::cout << "Burger: " << burger.getBun() << " bun, " << burger.getPatty()
              << " patty, sauce: " << burger.getSauce() << '\n'
              << std::boolalpha
              << "Cheese: " << burger.hasCheese()
              << ", lettuce: " << burger.hasLettuce()
              << ", tomato: " << burger.hasTomato()
              << ", onion: " << burger.hasOnion() << '\n';
}
