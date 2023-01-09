#pragma once
#ifndef HEADER_FATHER
#define HEADER_FATHER
#include<iostream>
#include"Base.h"
using namespace std;
class father:virtual protected base {
public:
	father() { cout << "create father\n"; }
	using base::drive;
	void working() { fix(); }
};

#endif // !HEADER_FATHER
