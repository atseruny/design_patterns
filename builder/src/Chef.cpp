#include "../include/Chef.hpp"

Burger Chef::cook(BurgerBuilder &b)
{
	b.setBun("sesame");
	b.setPatty("beef");
	b.addCheese();
	b.addLettuce();
	b.addTomato();
	b.addOnion();
	b.setSauce("mustard");
	return b.build();
}
