#include "PureflatCreate.h"
#include"A29.h"
#include"A43.h"

Sony* PureflatCreate::createInch29()
{
    return new A29();
}

Sony* PureflatCreate::createInch43()
{
    return new A43();
}

Sony2* PureflatCreate::createInch29L()
{
    return nullptr;
}

Createsony* createPureflat()
{
    return new PureflatCreate();
}