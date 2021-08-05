#pragma once
#include <string>

class IOnions
{
public:
	virtual void prepare() = 0;
	virtual ~IOnions() = default;
};
