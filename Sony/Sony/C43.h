#pragma once
#ifndef HEADER_C43
#define HEADER_C43
#include"Inch43.h"
#include"Liquidcrystal.h"

class C43 :public Inch43, protected Liquidcrystal {

public:
	void adjustVolume() { cout << "Liquidcrystal43 AdjustVolume!\n"; }
	void switchChannel() { cout << "Liquidcrystal43 switchChannel!\n"; }
	~C43() {}
};

#endif // !HEADER_C43