// FunctionPointer.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

class Object;

typedef void(Object::*SayHi)();
typedef void(Object::*CallaterHandler)();

#define Ch(fp) (CallaterHandler)(&fp)

void threadFunc(Object *target, CallaterHandler handler, int delay)
{
	Sleep(delay);
	(target->*handler)();
}

void callater(Object *target, CallaterHandler handler, int delay)
{
	std::thread t(threadFunc, target, handler, delay);
	t.join();
}

class Object
{
public:
	SayHi sayHi;

};
class Hello:public Object
{
public:
	Hello()
	{
//		sayHi = (SayHi)(&Hello::HelloSayHi);

//		(this->*sayHi)();
		callater(this,Ch(Hello::HelloSayHi),3000);
	}
	void HelloSayHi()
	{
		std::cout << "Hello C++\n";
	}

};




int main()
{
	Hello *h= new Hello();
	delete h;
    return 0;
}

