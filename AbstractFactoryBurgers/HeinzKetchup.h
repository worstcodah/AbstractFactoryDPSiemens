#pragma once
#include "IKetchup.h"

class HeinzKetchup : public IKetchup
{
public:
	HeinzKetchup();
	void prepare() override;
	~HeinzKetchup() override = default;
};
