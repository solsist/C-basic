#include<iostream>
using namespace std;
#include"template.h"
#include<ctime>



void f()
{
	srand((int)time(0));
	stack<double> s;
	for (int i = 0; i < 10; i++)
	{
		double t = 100 + 100 * (rand() / double(RAND_MAX));
		s.push(t);
	}

	s.pop();
	s.pop();
	s.pop();

	while (!s.isempty())
	{
		cout << s.top() << endl;
		s.pop();
	}
}

void g()
{
	stack<string> str;
	str.push("ะกร๗");
	str.push("zhangsan");
	str.push("lisi");
	str.push("wangwu");
	str.push("dingliu");

	while (!str.isempty())
	{
		cout << str.top() << endl;
		str.pop();
	}
}
int main()
{
	f();
	g();
	
}

