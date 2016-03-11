#include "stdafx.h"
#include "Man.h"



Man::Man(int age, int sex) :People(age, sex)
{
}

void Man::sayHello()
{
	People::sayHello();
	printf("Man:Hello World!\n");
}

void Man::eat()
{
	printf("Man eat!\n");
}
