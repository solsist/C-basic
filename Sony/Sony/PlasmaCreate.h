#pragma once
#ifndef HEADER_PLASMACREATE
#define HEADER_PLASMACREATE
#include"CreateSony.h"

class PlasmaCreate :public Createsony {
public:
	Sony* createInch29();
	Sony* createInch43();
	Sony2* createInch29L();
	~PlasmaCreate() {}
};


#endif
