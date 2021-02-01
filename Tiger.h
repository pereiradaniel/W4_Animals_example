#pragma once
#include "Animal.h"
class Tiger : public Animal {
public:
	void move() override;
	void eat(); // shadowing
};