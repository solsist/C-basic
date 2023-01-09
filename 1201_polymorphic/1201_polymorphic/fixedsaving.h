#pragma once
#ifndef HEADER_FIXEDSAVING
#define HEADER_FIXEDSAVING
#include"account.h"

class FixedSaving : public Account {
protected:
	int year, month, day;
	int t;
public:
	FixedSaving(string acnt, double amount, int t = 1);
	void display()const;
	void withdrawal(double amount);
};



#endif