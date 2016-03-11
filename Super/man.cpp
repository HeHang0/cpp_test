#include "stdafx.h"
#include "man.h"



man::man(int age, int sex):People(age,sex)
{

}

void man::sayHello()
{
	People::sayHello();
	printf("Man say:Hello World!\n");
}
