#pragma once
#include "IPickles.h"

class SweetPickles : public IPickles
{
public:
	SweetPickles();
	void prepare() override;
	~SweetPickles() override = default;
};

