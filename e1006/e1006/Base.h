#pragma once
#ifndef HEADER_BASE
#define HEADER_BASE
#include<iostream>
using namespace std;
class base {
public:
	void drive() { cout<<"开车\n"; }
	void sing(){cout<<"唱歌\n"; }
	void work() { cout << "打小工\n"; }
	void fix() { cout << "修电视机\n"; }
	void play() { cout << "打乒乓球\n"; }
};


#endif // !HEADER_BASE
