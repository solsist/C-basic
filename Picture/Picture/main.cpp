#include<iostream>
#include<fstream>
#include"shape.h"
#include"circle.h"
#include"shape.h"
#include"Triangle.h"
#include"rectangle.h"
#include<vector>
using namespace std;


int main()
{
	vector<Shape*> vec;
	ifstream in("shape.txt");
	double x1, x2, x3, y1, y2, y3,radius;
	string s;
	for (; in >> s && s != "X";)
	{
		switch (s[0])
		{
			case 'C':
				in >> x1 >> y1 >> radius;
				vec.push_back(new Circle(x1, y1, radius));
				break;
			case 'T':
				in >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
				vec.push_back(new Triangle(x1, y1, x2, y2, x3, y3));
				break;
			case 'R':
				in >> x1 >> y1 >> x2 >> y2;
				vec.push_back(new Rectangle(x1, y1, x2, y2));
				break;
		}
		
	}

	for (int i = 0; i < vec.size(); i++)
	{
		vec[i]->area();
	}


}
