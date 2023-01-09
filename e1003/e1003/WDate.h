#pragma once
#ifndef HEADER_WDATE
#define HEADER_WDATE
#include"Date.h"
class WDate:public Date{
protected:
	WDate(int n=1):Date(n){}
	WDate(const Date& d):Date(d){}
public:
	WDate(const string& s) :Date(s) {}
	WDate(int y, int m, int d) :Date(y, m, d) {}
	WDate operator+(int n) { return Date::operator+(n); }
	WDate& operator+=(int n) { i2ymd(ymd2i() + n); return *this; }
	WDate& operator++() { return *this += 1; }
	int getWeekDay() { return ymd2i() % 7; }
	int operator-(WDate& wd) { return ymd2i() - wd.ymd2i(); }
	friend ostream& operator<<(ostream& o, const WDate& d);
};


#endif // !HEADER_WDATE
