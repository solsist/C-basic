#include"fixedsaving.h"


FixedSaving::FixedSaving(string acnt, double amount, int t) :Account(acnt, amount),t(t)
{
	time_t ti = time(0);
	struct tm ptm;
	localtime_s(&ptm,&ti);
	year = ptm.tm_year + 1900;
	month = ptm.tm_mon + 1;
	day = ptm.tm_mday;
}


void FixedSaving::display()const
{
	std::cout << "FixedSaving账户名: " << acntNumber << ",余额还有" << balance << endl;
}

void FixedSaving::withdrawal(double amount)
{
	time_t ti = time(0);
	struct tm ptm;
	localtime_s(&ptm, &ti);
	int y2 = ptm.tm_year + 1900;
	int m2 = ptm.tm_mon + 1;
	int d2 = ptm.tm_mday;
	int years = y2 - year - ((m2 < month) || (m2 == month && d2 < day));
	double ll = 0;
	switch (t)
	{
		case 1:
			ll = 1.05;
			break;
		case 2:
			ll = 1.08;
			break;
		case 3:
			ll = 1.1;

	}
	cout << acntNumber << endl;
	if (years < t)
	{
		cout << "withdrawal ahead of the time " << year << "-" << month << "-" << day << endl;
		ll = 1.01;
	}
	cout << "the interest is " << ll << ".withdrawal " << balance * ll << " success\n";
	balance = 0;
}

