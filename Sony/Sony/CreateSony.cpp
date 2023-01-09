#include"CreateSony.h"

Sony* createSonyInch29(Createsony* sp)
{
	return sp->createInch29();
}

Sony* createSonyInch43(Createsony* sp)
{
	return sp->createInch43();
}

Sony2* createSonyInch29L(Createsony* sp)
{
	return sp->createInch29L();
}
Createsony* createCreateSony(int a)
{
	switch(a)
	{
		case 0:
			return createPureflat();
		case 1:
			return createPlasma();
		case 2:
			return createLiquidCrystal();
		case 3:
			return createNanometer();
		default:
			return 0;

	}
}
