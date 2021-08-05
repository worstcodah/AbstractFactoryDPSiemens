#pragma once
#include "IBun.h"
#include "IBurgerFactory.h"
#include "IKetchup.h"
#include "IMustard.h"
#include "IOnions.h"
#include "IPattie.h"
#include "IPickles.h"
#include "IIngredientsFactory.h"

class McDonaldsBurger : IBurgerFactory
{
public:
	McDonaldsBurger() = delete;
	McDonaldsBurger(IIngredientsFactory* ingredientsFactory);
	void createBurger() const override;
	~McDonaldsBurger();
private:
	IBun* m_bun;
	IPattie* m_pattie;
	IPickles* m_pickles;
	IOnions* m_onions;
	IKetchup* m_ketchup;
	IMustard* m_mustard;
};

