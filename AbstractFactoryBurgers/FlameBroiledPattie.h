#pragma once
#include "IPattie.h"

class FlameBroiledPattie : public IPattie
{
public:
	FlameBroiledPattie();
	void prepare() override;
	~FlameBroiledPattie() override = default;
};

