#include"circle.h"


Circle::Circle(double r_x, double r_y, double rad):Shape()
{
	x = r_x;
	y = r_y;
	radius = rad;
}

void Circle::area() {
	double area = pi * radius * radius;
	cout << "Circle's area is " << area << " and radius is " << getradius() << endl;
}

void Circle::display()const
{
	cout << "This is a circle!\n";
}