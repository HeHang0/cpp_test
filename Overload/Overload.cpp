// Overload.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


class Hello
{
public:
	void sayHello()
	{
		printf("Hello World!\n");
	}
	/*	void sayHello(char *name)
	{
	printf("Hello %s!\n",name);
	}*/
	void sayHello(std::string name)
	{
	std::string str = "Hello ";
	str+=name;
	std::cout << (char*)str.c_str() << "!\n";
	std::cout << str << "!\n";
	printf("%s!\n",(char*)str.c_str());
	}
};
int main()
{
	Hello *h = new Hello();
	h->sayHello("C++");
    return 0;
}

