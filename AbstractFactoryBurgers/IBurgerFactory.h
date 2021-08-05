#pragma once

class IBurgerFactory
{
public:
	virtual void createBurger() const = 0;
	virtual ~IBurgerFactory() = default;
};
