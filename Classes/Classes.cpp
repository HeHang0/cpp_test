// Classes.cpp : 定义控制台应用程序的入口点。
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

