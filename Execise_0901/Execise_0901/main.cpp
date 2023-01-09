#include<iostream>
using namespace std;

class MyClass 
{
	int number;
public:
	MyClass();
	MyClass(int n);
	~MyClass();
	void display();
};

MyClass::MyClass()
{
	cout << "Comstructing normally.\n";
}

MyClass::MyClass(int n):number(n)
{
	cout << "Constructing with a number " << number << "\n";
}

MyClass::~MyClass()
{
	cout << "Destructing" <<number<< "\n";
}

void MyClass::display()
{
	cout << "Display a number " << number << "\n";
}

int main()
{
	MyClass a;
	MyClass b(20);
	a.display();
	b.display();
}