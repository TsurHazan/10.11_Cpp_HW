#pragma once
#include "Animal.h"

class Cat:public Animal
{
public:
	void updateGurimCount();
	void printGurimCount();
	void updateAge();
	void printStatus();
private:
	int age;
	int gurimCount;
};

