#include "LiquidcrystalCreate.h"
#include"C29.h"
#include"C43.h"
Sony2* LiquidcrystalCreate::createInch29L()
{
    return new C29();
}

Sony* LiquidcrystalCreate::createInch43()
{
    return new C43();
}

Sony* LiquidcrystalCreate::createInch29()
{
    return nullptr;
}

Createsony* createLiquidCrystal()
{
    return new LiquidcrystalCreate();
}
