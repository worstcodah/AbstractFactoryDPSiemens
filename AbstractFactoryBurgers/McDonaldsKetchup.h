#pragma once
#include "IKetchup.h"

class McDonaldsKetchup : public IKetchup
{
public:
	McDonaldsKetchup();
	void prepare() override;
	~McDonaldsKetchup() override = default;
};

