#include "stdafx.h"
#include "People.h"

People::People()
{
	this->age = 21;
	this->sex = 1;
}

People::People(int age, int sex)
{
	this->age = age;
	this->sex = sex;
}

int People::getage()
{
	return this->age;
}

int People::getsex()
{
	return this->sex;
}


void People::sayHello()
{
	printf("Hello Classes!\n");
}
