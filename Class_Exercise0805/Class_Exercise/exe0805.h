#pragma once
#ifndef HEADER_EXE0805
#define HEADER_EXE0805
#include<iostream>
using namespace std;

class Stack {
	int arr[10];
	int value =0 ;
public:
	Stack() :value(0) {}
	void push(int a);
	int getTop();
	void back();
};


#endif // !1
