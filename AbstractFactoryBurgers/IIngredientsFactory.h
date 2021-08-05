#pragma once
#include "IKetchup.h"
#include "IMustard.h"
#include "IOnions.h"
#include "IPattie.h"
#include "IPickles.h"
#include "IBun.h"

class IIngredientsFactory
{
public:
	virtual IPattie* addPattie() = 0;
	virtual IBun* addBun() = 0;
	virtual IPickles* addPickles() = 0;
	virtual IOnions* addOnions() = 0;
	virtual IKetchup* addKetchup() = 0;
	virtual IMustard* addMustard() = 0;
	virtual ~IIngredientsFactory() = default;
};
