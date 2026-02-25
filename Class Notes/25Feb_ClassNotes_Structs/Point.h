#pragma once
struct Point //default it is public
{
	char* name;
	int x;
	int y;
	void print();
	Point(const char* _name, int _x, int _y);
	~Point();

	//void distance(Point& p2);
	static void distance(Point& p1, Point& p2);
	//pass by reference or by point instead of value or else its gonna be crashing
};

