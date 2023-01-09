#pragma once
#ifndef HEADER_PLASMA
#define HEADER_PLASMA
#include<iostream>
using namespace std;

class Plasma {

public:

	virtual void drawgraph() { cout << "Plasma.drawgraph!\n"; }
	virtual void specialForPlasma() { cout << "specialForPlasma!\n"; }
	~Plasma() {}
};



#endif

