// Functions.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Man.h"

int main()
{
	Man *p = new Man(20,1);
	p->sayHello();
	p->eat();
    return 0;
}

