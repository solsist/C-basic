#include<iostream>
#include<iomanip>
#include"Date.h"
#include"WDate.h"
using namespace std;





int main()
{
	Date d1("2005-08-21");
	Date d2(2008, 8, 8);
	WDate d3("2005-08-21");
	WDate d4(2008, 8, 8);
	cout << d3 << "\n";
	cout << d4 << "\n";
	cout << d2 - d1 << "\n" << d1 + 300;
}