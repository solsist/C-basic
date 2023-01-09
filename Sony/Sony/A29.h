#pragma once
#ifndef HEADER_A29
#define HEADER_A29
#include"Inch29.h"
#include"Pureflat.h"

class A29 :public Inch29, protected Pureflat {

public:
	void adjustVolume() { cout << "Pureflat29 AdjustVolume!\n"; }
	void switchChannel(){ cout << "Pureflat29 switchChannel!\n"; }
	~A29() {}
};

#endif // !HEADER_A29