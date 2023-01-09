#pragma once
#ifndef HEADER_CREDIT
#define HEADER_CREDIT
#include"saving_bro.h"

class Credit : public Saving {
	string password;
public:
	Credit(string acnt, double amount, string pw);
	void withdrawal(double amount);
	void display()const;
};


#endif // !HEADER_CREDIT
