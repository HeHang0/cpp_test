// Oprator.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

class Point
{
private:
	int a, b;
public:
	Point(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	int getA()
	{
		return this->a;
	}
	int getB()
	{
		return this->b;
	}
	void add(Point p)
	{
		add(p.getA(), p.getB());
	}
	void add(int a, int b)
	{
		this->a += a;
		this->b += b;
	}
	void operator += (Point p)
	{
		add(p);
	}
};

int main()
{
	Point p(10,10);
//	p.add(Point(15,18));
	p += Point(52,25);
	std::cout << "A:" << p.getA() << "\n";
	std::cout << "B:" << p.getB() << "\n";
    return 0;
}

