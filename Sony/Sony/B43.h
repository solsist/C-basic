#pragma once
#ifndef HEADER_B43
#define HEADER_B43
#include"Inch43.h"
#include"Plasma.h"

class B43 :public Inch43, protected Plasma {

public:
	void adjustVolume() { cout << "Plasma43 AdjustVolume!\n"; }
	void switchChannel() { cout << "Plasma43 switchChannel!\n"; }
	~B43() {}
};

#endif // !HEADER_B43