#pragma once
#ifndef HEADER_NANOMETER
#define HEADER_NANOMETER
#include<iostream>
using namespace std;
class Nanometer {

public:
	virtual void drawgraph() { cout << "Nanometer.drawgraph!\n"; }
	virtual void specialForNanometer(){ cout << "specialForNanometer!\n"; }
};


#endif