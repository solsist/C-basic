#include<iostream>
#include"saving_bro.h"

double Saving::minBalance = 0;

void Saving::display()const
{
	std::cout << "Saving�˻���: " << acntNumber << ",����" << balance << endl;
}
void Saving::withdrawal(double amount)
{
	if (amount > balance + minBalance)
	{
		cout << "ȡ�����Ⱥ����!\n";
	}
	if (amount<= balance + minBalance && amount>balance)
	{
		Account::setBalan(0);
		cout << "���Ϊ0�������ʹ��" << balance + minBalance - amount << endl;
	}
	if (amount <= balance)
	{
		balance -= amount;
	}
}
