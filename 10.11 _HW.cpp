// 10.11 _HW.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include "Child.h"
#include "Father.h"
#include "Runner.h"

#pragma warning(disable:4996)

int main()
{
    Father firstFather;
    firstFather.sayHello();

    Child firstChild;
    firstChild.sayHello();

    Runner firstRunner;
    firstRunner.createChild();
    firstRunner.createDogs();
    firstRunner.createCats();
}

