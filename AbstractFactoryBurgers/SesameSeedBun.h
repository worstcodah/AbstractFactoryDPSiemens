#pragma once
#include "IBun.h"

class SesameSeedBun : public IBun
{
public:
	SesameSeedBun();
	void prepare() override;
	~SesameSeedBun() override = default;
};

