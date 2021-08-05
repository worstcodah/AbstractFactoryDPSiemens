#pragma once
#include "IPickles.h"

class SourDillPickles : public IPickles
{
public:
	SourDillPickles();
	void prepare() override;
	~SourDillPickles() override = default;
};

