#include <iostream>
#include "util.h"
using namespace std;

int main()
{
	Animal* a = createAnimal();
	Animal* b;
	a->eat();	// from animal
	a->move();	// from ??
}