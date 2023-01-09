
#include<iostream>
#include"account.h"
#include"checking.h"
#include"saving_bro.h"
#include"accountlist.h"
#include"credit.h"
#include"fixedsaving.h"
#include<list>
#include<fstream>
using namespace std;

ifstream in("account.txt");
ifstream win("withdrawal.txt");
string account;
double val;

void withdrawal(AccountList& a)
{
	for (; win >> account >> val && account != "x";)
	{
		Account* p = a.find(account);
		p->withdrawal(val);
	}
}

int main()
{
	AccountList a;
	string pw;
	int year;
	for (; (in >> account >> val) && (account != "x" || val != 0);)
	{
		switch (account[1])
		{
			case 'a':
				a.add(new Saving(account, val));
				break;
			case 'h':
				a.add(new Checking(account, val));
				break;
			case 'r':
				in >> pw;
				a.add(new Credit(account, val, pw));
				break;
			case 'i':
				in >> year;
				a.add(new FixedSaving(account, val, year));
				break;
		}
	}
	a.display();
	withdrawal(a);
	a.display();



}