#pragma once
#ifndef HEADER_A43
#define HEADER_A43
#include"Inch43.h"
#include"Pureflat.h"

class A43 :public Inch43, protected Pureflat {

public:
	void adjustVolume() { cout << "Pureflat43 AdjustVolume!\n"; }
	void switchChannel() { cout << "Pureflat43 switchChannel!\n"; }
	~A43() {}
};

#endif // !HEADER_A43