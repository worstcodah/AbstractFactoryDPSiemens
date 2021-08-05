#pragma once
#include "IBun.h"

class NormalBun : public IBun
{
public:
	NormalBun();
	void prepare() override;
	~NormalBun() override = default;
};

