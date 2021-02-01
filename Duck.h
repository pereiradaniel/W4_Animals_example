#pragma once
#include "Animal.h"
class Duck : public Animal
{
public:
    void eat();
    void move() override;
};

