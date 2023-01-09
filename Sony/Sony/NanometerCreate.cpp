#include"NanometerCreate.h"
#include"CreateSony.h"
#include"D43.h"


Createsony* createNanometer()
{
    return new NanometerCreate();
}

Sony* NanometerCreate::createInch29()
{
    return nullptr;
}

Sony2* NanometerCreate::createInch29L()
{
    return nullptr;
}

Sony* NanometerCreate::createInch43()
{
    return new D43();
}

