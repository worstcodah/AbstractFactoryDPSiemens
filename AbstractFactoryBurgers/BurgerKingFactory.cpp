#include "BurgerKingFactory.h"

#include <iostream>

#include "FlameBroiledPattie.h"
#include "HeinzKetchup.h"
#include "HeinzMustard.h"
#include "SesameSeedBun.h"
#include "SweetPickles.h"

IBun* BurgerKingFactory::addBun()
{
	std::cout << "Adding sesame seed bun..." << std::endl;
	auto ref = SesameSeedBun();
	return &ref;
}

IKetchup* BurgerKingFactory::addKetchup()
{
	std::cout << "Adding heinz ketchup..." << std::endl;
	auto ref = HeinzKetchup();
	return &ref;
}
IMustard* BurgerKingFactory::addMustard()
{
	std::cout << "Adding heinz mustard..." << std::endl;
	auto ref = HeinzMustard();
	return &ref;
}

IOnions* BurgerKingFactory::addOnions()
{
	std::cout << "No onions for ya buddy..." << std::endl;
	return nullptr;
}
IPattie* BurgerKingFactory::addPattie()
{
	std::cout << "Adding flame broiled pattie..." << std::endl;
	auto ref = FlameBroiledPattie();
	return &ref;

}
IPickles* BurgerKingFactory::addPickles()
{
	std::cout << "Adding sweet pickles..." << std::endl;
	auto ref = SweetPickles();
	return &ref;
}







