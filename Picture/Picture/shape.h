#pragma once
#ifndef HEADER_SHAPE
#define HEADER_SHAPE
#include<iostream>
#include<vector>
using namespace std;
class Shape {
	
private:
	int size;
	
public:
	Shape():size(0) {};
	virtual void area() = 0;
	virtual void display()const;
};

#endif