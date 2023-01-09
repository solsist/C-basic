#pragma once
#ifndef HEADER_PUREFLAT
#define HEADER_PUERFLAT
#include<iostream>
using namespace std;
class Pureflat {


public:
	virtual void drawgraph() { cout << "Pureflat.drawgraph!\n"; }
	virtual void specialForPureflat() { cout << "specialForPureflat!\n"; }
	~Pureflat() {}
};

#endif // !HEADER_PUREFLAT
