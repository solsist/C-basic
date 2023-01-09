#pragma once
#ifndef HEADER_SONY
#define HEADER_SONY
class Createsony;
class Sony {

public:
	virtual void adjustVolume() = 0;
	virtual void switchChannel() = 0;
	virtual ~Sony() {}

};

Sony* createSonyInch29(Createsony*);
Sony* createSonyInch43(Createsony*);

#endif // !HEADER_SONY
