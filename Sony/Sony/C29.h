#pragma once
#ifndef HEADER_C29
#define HEADER_C29
#include"Inch29L.h"
#include"Liquidcrystal.h"

class C29 :public Inch29L, protected Liquidcrystal {

public:
	void adjustVolume() { cout << "Liquidcrystal29 AdjustVolume!\n"; }
	void switchChannel() { cout << "Liquidcrystal29 switchChannel!\n"; }
	void adjustLight() { cout << "Liquidcrystal29 adjustLight!\n"; }
	~C29() {}
};

#endif // !HEADER_C29