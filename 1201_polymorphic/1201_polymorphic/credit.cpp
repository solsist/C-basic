#include"credit.h"

Credit::Credit(string acnt, double amount, string pw):Saving(acnt,amount)
{
	password = pw;
}

void Credit::withdrawal(double amount)
{
	string s;
	cout << "ÇëÊäÈëÃÜÂë£º" << endl;
	cin >> s;
	if (s == password)
	{
		if (amount > balance)
		{

			cout << "È¡¿î³¬¹ýÓà¶î\n";

		}
		else
		{
			balance -= amount;
		}
	}
	else
	{
		cout << "ÃÜÂë´íÎó£¡\n";
	}
	
}
	
void Credit::display()const
{
	std::cout << "CreditÕË»§Ãû: " << acntNumber << ",Óà¶î»¹ÓÐ" << balance << endl;
}
