// Ref.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


class Point
{
private:
	int x, y;

public:
	Point(int x,int y)
	{
		this->x = x;
		this->y = y;
	}
	int getX()
	{
		return this->x;
	}
	int getY()
	{
		return this->y;
	}
	void add(Point &p)
	{
		this->x += p.x;
		this->y += p.y;
	}

};

int main()
{
	Point p(1,1);
	Point p1(2,3);
	p.add(p1);

	std::cout << "X = " << p.getX() << "\n";
	std::cout << "Y = " << p.getY() << "\n";

    return 0;
}

