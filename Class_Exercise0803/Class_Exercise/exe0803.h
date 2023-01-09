#pragma once
#ifndef HEADER_EXE0803
#define HEADER_EXE0803
#include<iostream>
using namespace std;

class Date {
	int day;
	int month;
	int year;
public:
	void setDate(int d, int m, int y);
	void getDate();
	Date operator+(int n);
};


#endif // !1
