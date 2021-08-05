#pragma once
#include <string>

class IBun
{
public:
	virtual void prepare() = 0;
	virtual ~IBun() = default;
};
