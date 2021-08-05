#pragma once
#include "IMustard.h"

class HeinzMustard : public IMustard
{
public:
	HeinzMustard();
	void prepare() override;
	~HeinzMustard() override = default;
};

