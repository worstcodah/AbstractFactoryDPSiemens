#pragma once
#include <string>

class IKetchup
{
public:
	virtual void prepare() = 0;
	virtual ~IKetchup() = default;
};
