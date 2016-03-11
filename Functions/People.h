#pragma once
class People
{
private:
	int age;
	int sex;
public:
	People();
	People(int age,int sex);
	int getage();
	int getsex();
	virtual void sayHello();
	virtual void eat() = 0;
};

