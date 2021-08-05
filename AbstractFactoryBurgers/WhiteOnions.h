#pragma once
#include "IOnions.h"

class WhiteOnions : public IOnions
{
public:
	WhiteOnions();
	void prepare() override;
	~WhiteOnions() override = default;
};

