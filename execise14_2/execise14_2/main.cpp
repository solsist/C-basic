#include<iostream>
using namespace std;


template<typename T>
T minnumber(const T& a, const T& b)
{
	return a > b ? b : a;
}


int main()
{
	int a = 1;
	int b = 2;
	cout << minnumber(a, b) << endl;
}
