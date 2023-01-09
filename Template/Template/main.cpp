#include<iostream>
using namespace std;

template<typename T>
void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
const T mymax1(const T& a,const T& b)
{
	return a > b ? a : b;
}

template<typename T>
const T &mymax2(const T& a, const T& b)
{
	return a > b ? a : b;
}

const char* const& mymax1(const char* const& a, const char* const& b)
{
	return strcmp(a, b) > 0 ? a : b;
}

template<typename T>
T* const& mymax1(T* const& a, T* const& b)
{
	return *a > *b ? a : b;
}
int main()
{
	//myswap(a, b);
	
	char a[6] = "Hello";
	char b[6] = "World";
	int c1 = 5;
	int d1 = 6;
	int* c = &c1;
	int* d = &d1;
	cout << mymax1(&a[0], &b[0]) << endl;
	cout << *mymax1(c, d) << endl;
	cout << mymax1(c1, d1) << endl;

}

