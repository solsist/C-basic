#pragma once
#ifndef HEAD_EXE0807
#define HEAD_EXE0807
#include<iostream>
using namespace std;


class Animal
{
	int itsWeight;
	int itsAge;
public:
	void setWeight(int a)
	{
		itsWeight = a;
	}
	void setAge(int b)
	{
		itsAge =  b;
	}
	void getWeight()
	{
		cout << itsWeight << endl;
	}
	void getAge()
	{
		cout << itsAge << endl;
	}
};

#endif