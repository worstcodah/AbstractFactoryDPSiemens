#pragma once
#include "IMustard.h"

class McDonaldsMustard : public IMustard
{
public:
	McDonaldsMustard();
	void prepare() override;
	~McDonaldsMustard() override = default;
};

