#pragma once
#include <string>

class IPickles
{
public:
	virtual void prepare() = 0;
	virtual ~IPickles() = default;
};
