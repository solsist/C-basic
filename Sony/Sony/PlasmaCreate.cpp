#include "PlasmaCreate.h"
#include"B29.h"
#include"B43.h"

Sony* PlasmaCreate::createInch29()
{
    return new B29();
}

Sony* PlasmaCreate::createInch43()
{
    return new B43();
}

Sony2* PlasmaCreate::createInch29L()
{
    return nullptr;
}

Createsony* createPlasma()
{
    return new PlasmaCreate();
}