#pragma once
#ifndef HEADER_CREATESONY
#define HEADER_CREATESONY
#include"Sony.h"
#include"Sony2.h"

class Createsony {

public:
	virtual Sony* createInch29() = 0;
	virtual Sony* createInch43() = 0;
	virtual Sony2* createInch29L() = 0;
	virtual ~Createsony() {}
};

Createsony* createCreateSony(int);
Createsony* createPureflat();
Createsony* createPlasma();
Createsony* createLiquidCrystal();
Createsony* createNanometer();

#endif // !HEADER_CREATESONY
