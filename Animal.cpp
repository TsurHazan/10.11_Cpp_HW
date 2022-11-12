#include "Animal.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h> 
#pragma warning(disable:4996)

void Animal::getCode()
{
	printf("enter animal code: ");
	scanf("%d", &code);
	printf("\n");
}

void Animal::printCode()
{
	printf("The code is: ", code);
}

void Animal::getName(char animalName[100])
{
	strcpy(name, animalName);
}

void Animal::printName()
{
	printf("The name is: %s\n", name);
}