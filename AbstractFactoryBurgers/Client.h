#pragma once
#include "RestaurantChain.h"
#include "BurgerKingBurger.h"
#include "BurgerKingFactory.h"
#include "McDonaldsBurger.h"
#include "McDonaldsFactory.h"

class Client
{
public:
	Client() = default;
	void orderBurger(const RestaurantChain restaurantChain) const;
	
};

