#pragma once
#ifndef HEADER_LIQUIDCRYSTALCREATE
#define HEADER_LIQUIDCRYSTALCREATE
#include"CreateSony.h"

class LiquidcrystalCreate :public Createsony {
public:
	Sony2* createInch29L();
	Sony* createInch43();
	Sony* createInch29();
	~LiquidcrystalCreate(){}
};


#endif
