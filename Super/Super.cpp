// Super.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "man.h"

int main()
{
	man *m = new man(25,0);
	printf("age:%d\n", m->getage());
	if (m->getsex())
		printf("sex:man\n");
	else
		printf("sex:woman\n");
	m->sayHello();

    return 0;
}

