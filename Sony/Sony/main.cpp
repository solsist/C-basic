#include"CreateSony.h"
#include"Sonyhandle.h"
#include"Sony2handle.h"
#include<iostream>
using namespace std;
enum Technology { PUREFLAT, PLASMA, LIQUIDCRYSTAL,NANOMETER };


void fn(SonyHandle& sh) {
	sh->adjustVolume();
	sh->switchChannel();
	 
}

void fn2(Sony2Handle& sh) {
	sh->adjustVolume();
	sh->switchChannel();
	sh->adjustLight();
}

void createSonyObject(Createsony* sp)
{
	Sony2* p = dynamic_cast<Sony2*>(createSonyInch29L(sp));
	if (p)
	{
		Sony2Handle s29L = Sony2Handle(createSonyInch29L(sp));
		fn2(s29L);
	}
	else
	{
		SonyHandle s29(createSonyInch29(sp));
		fn(s29);
	}
	SonyHandle s43(createSonyInch43(sp));
	fn(s43);
}

int main()
{
	if (Createsony* sp = createCreateSony(LIQUIDCRYSTAL))
	{ 
		createSonyObject(sp);
		delete sp;
	}


}
