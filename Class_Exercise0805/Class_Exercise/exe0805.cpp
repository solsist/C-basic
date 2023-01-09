#include"exe0805.h"
#include<iostream>
using namespace std;


void Stack::push(int a)
{
	if (value == 10)
	{
		cout << "Õ»Âú" << endl;
		return;
	}
	arr[value++] = a;
}

int Stack::getTop()
{
	if (value == 0)
	{
		return 0;
	}
	return arr[value - 1];
	
}


void Stack::back()
{
	if (value == 0)
	{
		cout << "Õ»ÒÑ¿Õ£¬ÎÞ·¨ÍËÕ»" << endl;
		return;
	}
	--value;
}