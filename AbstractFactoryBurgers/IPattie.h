#pragma once
#include <string>

class IPattie
{
public:
	virtual void prepare() = 0;
	virtual ~IPattie() = default;
};
