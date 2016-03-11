#pragma once
#include "People.h"
class Man :public People
{
public:
	Man(int age, int sex);
	virtual void sayHello();
	virtual void eat();
};

