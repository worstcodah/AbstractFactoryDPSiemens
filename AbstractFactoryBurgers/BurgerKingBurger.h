#pragma once
#include "IBun.h"
#include "IBurgerFactory.h"
#include "IIngredientsFactory.h"
#include "IKetchup.h"
#include "IMustard.h"
#include "IOnions.h"
#include "IPattie.h"
#include "IPickles.h"

class BurgerKingBurger : public IBurgerFactory
{
public:
	BurgerKingBurger() = delete;
	BurgerKingBurger(IIngredientsFactory* ingredientsFactory);
	void createBurger() const override;
	~BurgerKingBurger();
private:
	IBun* m_bun;
	IPattie* m_pattie;
	IPickles* m_pickles;
	IOnions* m_onions;
	IKetchup* m_ketchup;
	IMustard* m_mustard;
};

