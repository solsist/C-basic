#include"exe0805.h"
#include<iostream>
using namespace std;


void Stack::push(int a)
{
	if (value == 10)
	{
		cout << "ջ��" << endl;
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
		cout << "ջ�ѿգ��޷���ջ" << endl;
		return;
	}
	--value;
}