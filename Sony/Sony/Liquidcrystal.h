#pragma once
#ifndef HEADER_LIQUIDCRYSTAL
#define HEADER_LIQUIDCRYSTAL
#include<iostream>
using namespace std;

class Liquidcrystal {

public:
	virtual void drawgraph() { cout << "Liquidcrystal.drawgraph!\n"; }
	virtual void specialForLiquidcrystal() { cout << "specialForLiquidcrystal!\n"; }
	~Liquidcrystal() {}
};

#endif // !HEADER_LIQUIDCRYSTAL
