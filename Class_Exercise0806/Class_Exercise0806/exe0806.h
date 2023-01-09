#pragma once
#ifndef HEAD_EXE0806
#define HEAD_EXE0806
#include<iostream>
using namespace std;

class Boat;
class Car
{
	int size;
public:
	void setSize(int j)
	{
		size = j;
	}
	int getSize()
	{
		return size;
	}
	friend int leisure(int time, Car& aobj, Boat& bobj);
	
};

class Boat 
{
	int size;
public:
	void setSize(int j)
	{
		size = j;
	}
	int getSize()
	{
		return size;
	}
	friend int leisure(int time, Car& aobj, Boat& bobj);
	
};

#endif