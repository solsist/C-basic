#pragma once
#ifndef HEADER_SONYHANDLE
#define HEADER_SONYHANDLE
#include"Sony.h"

class SonyHandle {
	Sony* p;
	int* count;
public:
	Sony* operator->() { return p; }
	SonyHandle(Sony* pp) :p(pp),count(new int(1)) {}
	SonyHandle(const SonyHandle& sh) :p(sh.p), count(sh.count) {}
	SonyHandle& operator=(const SonyHandle& sh)
	{
		if (sh.p == p)
			return *this;
		(*this).~SonyHandle();
		p = sh.p;
		count = sh.count;
		(*count)++;
		return *this;
	}
	~SonyHandle() {
		if (--(*count) == 0)
		{
			delete p;
			delete count;
		}
	}
};

#endif