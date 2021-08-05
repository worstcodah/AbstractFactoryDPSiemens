#include "McDonaldsBurger.h"

#include <iostream>


McDonaldsBurger::McDonaldsBurger(IIngredientsFactory* ingredientsFactory)
{
	m_bun = ingredientsFactory->addBun();
	m_ketchup = ingredientsFactory->addKetchup();
	m_pattie = ingredientsFactory->addPattie();
	m_pickles = ingredientsFactory->addPickles();
	m_onions = ingredientsFactory->addOnions();
	m_mustard = ingredientsFactory->addMustard();
	createBurger();
}


void McDonaldsBurger::createBurger() const
{
	std::cout << "We have successfully created the burger (McDonald's)" << std::endl;
}

McDonaldsBurger::~McDonaldsBurger()
{
	delete m_bun;
	delete m_pattie;
	delete m_pickles;
	delete m_onions;
	delete m_ketchup;
	delete m_mustard;
}
