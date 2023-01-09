#include<iostream>
#include"saving_bro.h"

double Saving::minBalance = 0;

void Saving::display()const
{
	std::cout << "Saving账户名: " << acntNumber << ",余额还有" << balance << endl;
}
void Saving::withdrawal(double amount)
{
	if (amount > balance + minBalance)
	{
		cout << "取款超过额度和余额!\n";
	}
	if (amount<= balance + minBalance && amount>balance)
	{
		Account::setBalan(0);
		cout << "余额为0，额度已使用" << balance + minBalance - amount << endl;
	}
	if (amount <= balance)
	{
		balance -= amount;
	}
}
