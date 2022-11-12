#include "Cat.h"
#include "Animal.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h> 
#pragma warning(disable:4996)


void Cat::updateGurimCount()
{
	printf("What is the new Gurim count?: ");
	scanf("%d", &gurimCount);
	printf("\nThe new gurim count is:%d \n", gurimCount);
}
void Cat::printGurimCount()
{
	printf("Current Gurim count is:%d\n", gurimCount);
}
void Cat::updateAge()
{
	printf("Enter age: ");
	scanf("%d", &age);
	printf("The age is now: %d\n", age);
}

void Cat::printStatus()
{
	printf("\n\nName:%s\nAge:%d\nCode:%d\nGurim count:%d\n\n", name,age ,code, gurimCount);
}