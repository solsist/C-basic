#pragma once
#ifndef HEADER_TRITANGLE
#define HEADER_TRITANGLE

#include"shape.h"

class Triangle :public Shape {

	double x1, x2, y1, y2, x3, y3;

public:

	Triangle(double r_x1, double r_x2, double r_y1, double r_y2, double r_x3, double r_y3);
	void area();
	void display();
};
#endif