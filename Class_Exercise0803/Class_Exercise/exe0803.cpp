#include"exe0803.h"
#include<iostream>
using namespace std;

void Date::setDate(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}
void Date::getDate()
{
	cout << day << "/" << month << "/" << year << endl;
}
Date Date::operator+(int n)
{
	Date s;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
	{
		day = (day + n) % 31;
		month += (day + n) / 31;
	}
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		day = (day + n) % 30;
		month += (day + n) / 30;
	}
	if (year % 4 == 0 && month == 2)
	{
		day = (day + n) % 29;
		month += (day + n) / 29;
	}
	if (year % 4 != 0 && month == 2)
	{
		day = (day + n) % 28;
		month += (day + n) / 28;
	}
	if (day == 31 && month == 12)
	{
		day = (day + n) % 31;
		month = 1;
		year += 1;
	}
	s.setDate(day, month, year);
	return s;
}