#include "Point.h"
#include <iostream>
#include <cmath>

void Point::print()
{
	std::cout << "(" << x << ", " << y << ")";

}

Point::Point(const char* _name, int _x, int _y)
{
	x = _x;
	y = _y;
}

Point::~Point()
{
	std::cout << "~Point" << std::endl;
	delete[] name; //now memory leak is taken care of
}

void Point::distance(Point& p1, Point& p2)
{
	int dx = p2.x - p1.x;
	int dy = p2.y - p1.y;
}
