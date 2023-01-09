#pragma once
#ifndef HEADER_SAVING
#define HEADER_SAVING
#include"account.h"


class Saving : public Account {
	
public:
	static double minBalance;
	Saving(string acntNo, double balan = 0.0) :Account(acntNo, balan) {}
	void display()const;
	void withdrawal(double amount);
	virtual ~Saving(){}
};


#endif // 
