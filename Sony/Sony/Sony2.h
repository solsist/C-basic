#pragma once
#ifndef HEADER_SONY2
#define HEADER_SONY2
#include"Sony.h"
class Sony2:public Sony {

public:
	virtual void adjustLight() = 0;
};

Sony2* createSonyInch29L(Createsony*);

#endif