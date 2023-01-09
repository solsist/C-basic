#include "exe0808.h"
#include<iostream>
using namespace std;

int main()
{
	Cat a;
	a.getAge();
	a.getWeight();
	Cat b;
	b.getAge();
	b.getWeight();
	Cat c;
	c.getAge();
	c.getWeight();
	a.~Cat();
	b.~Cat();
	c.~Cat();
	a.getAge();
	a.getWeight();
	b.getAge();
	b.getWeight();
	c.getAge();
	c.getWeight();

}

