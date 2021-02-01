#ifndef ANIMAL_H
#define ANIMAL_H
class Animal {
public:
	virtual void move() = 0;
	void eat();
};
#endif