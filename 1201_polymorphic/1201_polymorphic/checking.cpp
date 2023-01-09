#include"checking.h"


void Checking::display()const
{
	std::cout << "Checking�˻���: " << acntNumber << ",����" << balance << endl;
}

void Checking::withdrawal(double amount)
{
	double balan = Account::getBalan();
	if (remittance == remitByPost)
		amount += 30;
	if (remittance == remitByCable)
		amount += 60;
	if (balan < amount)
		std::cout << "Insufficient funds withdrawal: " << amount << "\n";
	else
		Account::setBalan(balan - amount);
}