#pragma once
#include "IPattie.h"

class GrilledPattie : public IPattie
{
public:
	GrilledPattie();
	void prepare() override;
	~GrilledPattie() override = default;
};

