#include "McDonaldsFactory.h"

#include <iostream>

#include "GrilledPattie.h"
#include "McDonaldsKetchup.h"
#include "McDonaldsMustard.h"
#include "NormalBun.h"
#include "SourDillPickles.h"
#include "WhiteOnions.h"


IBun* McDonaldsFactory::addBun()
{
	std::cout << "Adding normal bun..." << std::endl;
	auto ref = NormalBun();
	return &ref;
}

IKetchup* McDonaldsFactory::addKetchup()
{
	std::cout << "Adding McDonald's ketchup..." << std::endl;
	auto ref = McDonaldsKetchup();
	return &ref;
}

IMustard* McDonaldsFactory::addMustard()
{
	std::cout << "Adding McDonald's mustard..." << std::endl;
	auto ref = McDonaldsMustard();
	return &ref;
	
}

IOnions* McDonaldsFactory::addOnions()
{
	std::cout << "Adding white onions..." << std::endl;
	auto ref = WhiteOnions();
	return &ref;
}

IPattie* McDonaldsFactory::addPattie()
{
	std::cout << "Adding grilled pattie..." << std::endl;
	auto ref = GrilledPattie();
	return &ref;
}

IPickles* McDonaldsFactory::addPickles()
{
	std::cout << "Adding sour dill pickles..." << std::endl;
	auto ref = SourDillPickles();
	return &ref;
}



