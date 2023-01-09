#include<iostream>
#include"exe0805.h"
using namespace std;


int main()
{
	Stack a;
	a.push(10);
	cout << a.getTop()<<endl;
	a.back();
	cout << a.getTop() << endl;
}