#include <iostream>
#include "Duck.h"
#include "Tiger.h"
#include "MechanicalTiger.h"
#include "util.h"

using namespace std;

Animal* createAnimal()
{
	Animal* result = nullptr;
	char choice = '\0';
	cout << "What aniam (t/d)? ";
	cin >> choice;
	if (choice == 'd')
		result = new Duck;
	else
		result = new Tiger;
	return result;
}