#pragma once
#ifndef HEADER_DATE
#define HEADER_DATE
#include<iostream>
#include<iomanip>
using namespace std;

class Date {
	int year, month, day;
	void init();
	static const int tians[];
protected:
	Date(int n = 1) { i2ymd(n); }
	int ymd2i()const;
	void i2ymd(int n);
public:
	Date(const string& s);
	Date(int y, int m, int d) :year(y), month(m), day(d) {}
	bool isLeapYear()const;
	Date operator+(int n)const { return Date(ymd2i() + n); }
	Date& operator+=(int n) { i2ymd(ymd2i() + n); return *this; }
	Date& operator++() { return *this += 1; }
	int operator-(Date& d)const { return ymd2i() - d.ymd2i(); }
	friend ostream& operator<<(ostream& o, const Date& d);
};



#endif // !HEADER_DATE
