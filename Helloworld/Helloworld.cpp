// Helloworld.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "People.h"


int main()
{
	People *p = new People();
	p->sayHello();
	delete p;

    return 0;
}

