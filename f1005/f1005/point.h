#pragma once
#ifndef HEADER_POINT
#define HEADER_POINT
#include<iostream>
#include<iomanip>
using namespace std;

class Point {
protected:
	double x, y;
public:
	static double PI;
public:
	Point(double a = 0, double b = 0);
	double xOffest()const;
	double yOffest()const;
	double angle()const;
	double radius()const;
	Point operator+(const Point& d)const;
	Point& operator+=(const Point& d);
	void moveTo(double a, double b);
	friend inline ostream& operator<<(ostream& o, const Point& d)
	{
		return o << '(' << d.x << ',' << d.y << ')' << endl;
	}
	
};


#endif