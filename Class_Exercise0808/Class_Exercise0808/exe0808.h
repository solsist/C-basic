#pragma once
#ifndef EXECISE0808
#define EXECISE0808
#include<iostream>
using namespace std;

class Cat
{
	int age;
	int weight;
public:
	Cat()
	{
		age = 0;
		weight = 0;
		weight++;
	}
	~Cat()
	{
		weight--;
	}
	void getAge()
	{
		cout << age << endl;
	}
	void getWeight()
	{
		cout << weight << endl;
	}
};


#endif // !EXECISE0808
