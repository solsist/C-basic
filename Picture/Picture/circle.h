#pragma once
#ifndef HEADER_CIRCLE
#define HEADER_CIRCLE
#include"shape.h"
const double pi = 3.14;
class Circle : public Shape {

private:
	double x, y, radius;

public:
	Circle(double r_x, double r_y, double rad);
	double getradius() { return radius; }
	void area();
	void display()const;
};

#endif // !HEADER_CIRCLE
