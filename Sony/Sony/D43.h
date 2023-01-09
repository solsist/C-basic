#pragma once
#ifndef HEADER_D43
#define HEADER_D43
#include"Inch43.h"
#include"Nanometer.h"

class D43 :public Inch43, protected Nanometer {

public:
	void adjustVolume() { cout << "Nanometer43 AdjustVolume!\n"; }
	void switchChannel() { cout << "Nanometer43 switchChannel!\n"; }
	~D43() {}
};

#endif // !HEADER_D43