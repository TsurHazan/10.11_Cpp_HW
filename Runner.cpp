#include "Runner.h"
#include "Cat.h"
#include "Dog.h"
#include "Animal.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h> 
#pragma warning(disable:4996)

void Runner::createChild()
{
	Child runnerChild;
	printf("\n this is child under runner: ");
	runnerChild.sayHello();
}

void Runner::createDogs()
{
	char firstName[] = "Rexy";
	char secName[] = "Bon";
	
	Dog firstDog;
	firstDog.getName(firstName);
	firstDog.getCode();
	firstDog.updateGurimCount();
	firstDog.printStatus();

	Dog secondDog;
	secondDog.getName(secName);
	secondDog.getCode();
	secondDog.updateGurimCount();
	secondDog.printStatus();
}

void Runner::createCats()
{
	char firstName[] = "Mitzi";
	char secondName[] = "Mee-yao";

	Cat firstCat;
	firstCat.getName(firstName);
	firstCat.getCode();
	firstCat.updateGurimCount();
	firstCat.updateAge();
	firstCat.printStatus();

	Cat secondCat;
	secondCat.getName(secondName);
	secondCat.getCode();
	secondCat.updateGurimCount();
	secondCat.updateAge();
	secondCat.printStatus();
}