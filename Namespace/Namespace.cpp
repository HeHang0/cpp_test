// Namespace.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "People.h"
using namespace Hello;
int main()
{
	People *p = new People();
	p->sayHello();
	delete p;



    return 0;
}

