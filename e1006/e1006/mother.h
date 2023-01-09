#pragma once
#ifndef HEADER_MOTHER
#define HEADER_MOTHER
#include<iostream>
#include"Base.h"
using namespace std;
class mother:virtual protected base {
	using base::work;
public:
	mother() { cout << "create mother\n"; }
	using base::sing;
	void working() { work(); }
};

#endif // !HEADER_MOTHER

