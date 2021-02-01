#pragma once
#include <iostream>
#include "Animal.h"
class Tiger : public Animal {
public:
	void move() override;
	Animal* clone() override
	{
		std::cout << "cloning tigers.\n";
		return new Tiger(*this);
	}
	virtual bool operator==(const Animal& other) const override
	{
		const Tiger* theOther = dynamic_cast<const Tiger*>(&other);
		// check conversion

	}
	void eat(); // shadowing
};