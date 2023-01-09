#include<iostream>
#include"exe0803.h"
using namespace std;


int main()
{
	Date d;
	d.setDate(31, 12, 2001);
	d.getDate();
	Date s;
	s = d + 5;
	s.getDate();
}