#include"credit.h"

Credit::Credit(string acnt, double amount, string pw):Saving(acnt,amount)
{
	password = pw;
}

void Credit::withdrawal(double amount)
{
	string s;
	cout << "���������룺" << endl;
	cin >> s;
	if (s == password)
	{
		if (amount > balance)
		{

			cout << "ȡ������\n";

		}
		else
		{
			balance -= amount;
		}
	}
	else
	{
		cout << "�������\n";
	}
	
}
	
void Credit::display()const
{
	std::cout << "Credit�˻���: " << acntNumber << ",����" << balance << endl;
}
