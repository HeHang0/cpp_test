// PseudoFunction.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

void  hello()
{
	std::cout << "hello C++!\n";
}

class Hello
{
public:
	void operator ()()
	{
		std::cout << "Hello CPP!\n";
	}
};


int main()
{
	Hello p;
	p();
	hello();
    return 0;
}

