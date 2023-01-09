#include "triangle.h"

Triangle::Triangle(double r_x1, double r_y1, double r_x2, double r_y2, double r_x3, double r_y3):Shape()
{
	x1 = r_x1;
	x2 = r_x1;
	x3 = r_x3;
	y1 = r_y1;
	y2 = r_y2;
	y3 = r_y3;
}

void Triangle::area()
{
	double xa = x2 - x3, ya = y2 - y3;
	double xb = x1 - x3, yb = y1 - y3;
	double xc = x1 - x2, yc = y1 - y2;
	xa *= xa; xb *= xb; xc *= xc;
	ya *= ya; yb *= yb; yc *= yc;
	double sa = sqrt(xa + ya), sb = sqrt(xb + yb), sc = sqrt(xc + yc);
	double ss = (sa + sb + sc) / 2;
	double area = sqrt(ss * (ss - sa) * (ss - sb) * (ss - sc));
	cout << "Tritangle's area is " << area << endl;
}

void Triangle::display()
{
	cout << "This is a triangle\n";
}
