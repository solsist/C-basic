#pragma once
#ifndef HEADER_PUREFLATCREATE
#define HEADER_PUREFLATCREATE
#include"CreateSony.h"

class PureflatCreate :public Createsony {
public:
	Sony* createInch29();
	Sony* createInch43();
	Sony2* createInch29L();
	~PureflatCreate() {}
};


#endif
