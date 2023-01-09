#pragma once
#ifndef HEADER_SONY2HANDLE
#define HEADER_SONY2HANDLE
#include"Sony2.h"

class Sony2Handle {
	Sony2* p;
	int* count;
public:
	Sony2Handle(Sony2* pp):p(pp),count(new int(1)) {}
	Sony2Handle(const Sony2Handle& sh) :p(sh.p), count(sh.count) {}
	Sony2* operator->() { return p; }
	Sony2Handle operator=(const Sony2Handle& sh)
	{
		if (sh.p == p)
			return *this;
		(*this).~Sony2Handle();
		p = sh.p;
		count = sh.count;
		(*count)++;
		return *this;
	}
	~Sony2Handle() {
		if (--(*count) == 0) {
			delete p;
			delete count;
		}
	}
	

};

#endif