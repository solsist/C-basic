#include<iostream>
using namespace std;


class A {
protected:
	int a;
public:
	A(int x) :a(x) { cout << "Constructing A\n"; }
};
class B:public A{
public:
	B(int b):A(b) { cout << "Constructing B\n"; }
};

int main()
{
	B b(1);
}