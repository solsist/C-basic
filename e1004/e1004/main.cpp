#include<iostream>
using namespace std;

class A {
	int pA;
public:
	void set(int pa) { pA = pa; }
	int get() { return pA; }
};

class B :virtual public A {	
public:
	void onB() {
		set(1);
		cout << get() << endl;
	}
	
};

class C :virtual public A, public B {
public:
	void sc() {
		set(20);
		cout << get() << endl;
		onB();
	};
};
int main()
{
	C().sc();
}