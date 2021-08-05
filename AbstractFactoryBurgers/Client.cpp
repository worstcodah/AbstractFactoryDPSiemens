#include "Client.h"

#include <iostream>

void Client::orderBurger(const RestaurantChain restaurantChain) const
{
	switch (restaurantChain)
	{
	case RestaurantChain::BK: {
		auto factoryRef = BurgerKingFactory();
		const auto& burgerKingBurger = BurgerKingBurger(&factoryRef);
		break;
	}
	case RestaurantChain::MCDONALDS:
	{
		auto factoryRef = McDonaldsFactory();
		const auto& mcDonaldsBurger = McDonaldsBurger(&factoryRef);
		break;
	}
	}
	std::cout << "We're on our way!";
}
