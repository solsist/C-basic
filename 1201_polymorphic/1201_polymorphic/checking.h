#pragma once
#ifndef HEADER_CHECKING
#define HEADER_CHECKING
#include"account.h"

enum REMIT{remitByPost,remitByCable,other};

class Checking : public Account {

	REMIT remittance;
public:
	Checking(string acntNo, double balan = 0.0) :Account(acntNo, balan) {};
	void withdrawal(double amount);
	void display()const;
	void setRemit(REMIT re) { remittance = re; }
	virtual ~Checking(){}
};



#endif