// Classes.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "man.h"

int main()
{
	man *m = new man();
	m->sayHello();

	delete m;

    return 0;
}

