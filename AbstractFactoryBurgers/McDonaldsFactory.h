#pragma once
#include "IBun.h"
#include "IBurgerFactory.h"
#include "IIngredientsFactory.h"
#include "IKetchup.h"
#include "IMustard.h"
#include "IOnions.h"
#include "IPattie.h"
#include "IPickles.h"

class McDonaldsFactory : public IIngredientsFactory
{
public:
	IBun* addBun() override;
	IKetchup* addKetchup() override;
	IMustard* addMustard() override;
	IOnions* addOnions() override;
	IPattie* addPattie() override;
	IPickles* addPickles() override;
};

