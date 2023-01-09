#include"exe0802.h"
#include<iostream>
using namespace std;

int Cat::getAge()
{
	return itsAge;
}
void Cat::setAge(int Age)
{
	itsAge = Age;
}
void Cat::meow()
{
	cout << "Meow.\n";
}