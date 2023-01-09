#pragma once
#ifndef HEADER_RECTANGLE
#define HEADER_RECTANGLE

#include"shape.h"

class Rectangle :public Shape {

	double x1, x2, y1, y2;

public:

	Rectangle(double r_x1, double r_x2, double r_y1, double r_y2);
	void area();
	void display();
};


#endif