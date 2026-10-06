#include "include/Book.hpp"
#include "include/Electronics.hpp"
#include "include/ShoppingBag.hpp"

int main()
{
	ShoppingBag shoppingBag;
	shoppingBag.add(std::make_unique<Book>(1299));
	shoppingBag.add(std::make_unique<Electronics>(4999));

	auto giftBag = std::make_unique<ShoppingBag>();
	giftBag->add(std::make_unique<Book>(1599));
	giftBag->add(std::make_unique<Electronics>(2499));
	shoppingBag.add(std::move(giftBag));

	const auto total = shoppingBag.GetPrice();
	std::cout << "Payment amount: $" << total / 100 << '.'
			  << std::setw(2) << std::setfill('0') << total % 100 << '\n';
}
