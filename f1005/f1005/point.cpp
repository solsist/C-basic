#include"point.h"
#include<cmath>
using namespace std;


double Point::PI = 3.14159265;

Point::Point(double a,double b):x(a),y(b){}
double Point::xOffest()const { return x; }
double Point::yOffest()const { return y; }
double Point::angle()const { return (180 / PI) * atan2(y, x); }
double Point::radius()const { return sqrt(x * x + y * y); }
void Point::moveTo(double a, double b) { x = a, y = b; }
Point Point::operator+(const Point& d)const { return Point(x + d.x, y + d.y); }
Point& Point::operator+=(const Point& d) {
	x += d.x;
	y += d.y;
	return *this;
}



