#pragma once
#ifndef HEADER_B29
#define HEADER_B29
#include"Inch29.h"
#include"Plasma.h"

class B29 :public Inch29, protected Plasma {

public:
	void adjustVolume() { cout << "Plasma29 AdjustVolume!\n"; }
	void switchChannel() { cout << "Plasma29 switchChannel!\n"; }
	~B29() {}
};

#endif // !HEADER_B29