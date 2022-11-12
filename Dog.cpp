#include "Dog.h"
#include "Animal.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h> 
#pragma warning(disable:4996)

void Dog::updateGurimCount()
{
	printf("What is the new Gurim count?: ");
	scanf("%d", &gurimCount);
	printf("\nThe new gurim count is:%d \n", gurimCount);
}
void Dog::printGurimCount()
{
	printf("Current Gurim count is:%d\n", gurimCount);
}

void Dog::printStatus()
{
	printf("\n\nName:%s\nCode:%d\nGurim count:%d\n\n", name,code,gurimCount);
}