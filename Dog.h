#pragma once
#include "Animal.h"

class Dog:public Animal
{
public:
	void updateGurimCount();
	void printStatus();
	void printGurimCount();

private:
	int gurimCount;
};

