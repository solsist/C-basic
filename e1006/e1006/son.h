#pragma once
#pragma once
#ifndef HEADER_SON
#define HEADER_SON
#include<iostream>
#include"father.h"
#include"mother.h"
using namespace std;
class son:public father,public mother {
public:
	son() { cout << "create son\n"; }
	using base::play;
	using father::fix;
};

#endif // !SON
