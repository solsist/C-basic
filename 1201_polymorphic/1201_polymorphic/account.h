#pragma once
#ifndef HEADER_ACCOUNT
#define HEADER_ACCOUNT
#include<iostream>
using namespace std;
class Account {

private:
	void deposit(double amount) { balance += amount; }
protected:
	string acntNumber;
	double balance;
public:
	Account(string acntNo, double balan = 0.0);
	virtual void display()const = 0;
	double getBalan()const { return balance; }
	void setBalan(double balan) { balance = balan; }
	string getAcnt()const { return acntNumber; }
	bool operator==(const Account& a) { return acntNumber == a.acntNumber; }
	virtual void withdrawal(double amount) = 0;
	virtual ~Account(){}
};


#endif // !HEADER_ACCOUNT
