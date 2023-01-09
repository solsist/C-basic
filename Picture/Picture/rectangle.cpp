#include "rectangle.h"

Rectangle::Rectangle(double r_x1, double r_y1, double r_x2, double r_y2):Shape()
{
	x1 = r_x1;
	x2 = r_x2;
	y1 = r_y1;
	y2 = r_y2;
}

void Rectangle::area()
{
	double area = abs(x2 - x1) * abs(y2 - y1);
	cout << "Rectangle's area is " << area << endl;
}

void Rectangle::display()
{
	cout << "This is a rectangle!\n";
}
