#include<iostream>
using namespace std;

constexpr auto InitSize = 50;;
typedef struct {

	int * data;
	int length;
	int maxsize;

}sqList;



bool merge(sqList a, sqList b, sqList& c)
{
	if (a.length + b.length > c.maxsize)
	{
		return false;
	}
		
	int i = 0, j = 0, k = 0;
	while (i < a.length && j < b.length)
	{
		if (a.data[i] <= b.data[j])
		{
			c.data[k++] = a.data[i++];
		}
		else
		{
			c.data[k++] = b.data[j++];
		}

	}

	while (i < a.length)
		c.data[k++] = a.data[i++];
	while (j < b.length)
		c.data[k++] = b.data[j++];
	c.length = k;
	return true;


}

int main()
{
	sqList a;
	a.data = new int[InitSize];
	a.data[0] = 1;
	a.data[1] = 3;
	a.data[2] = 5;
	a.length = 3;
	a.maxsize = 10;

	sqList b;
	b.data = new int[InitSize];
	b.data[0] = 1;
	b.data[1] = 2;
	b.data[2] = 3;
	b.data[3] = 4;
	b.data[4] = 5;
	b.length = 5;
	b.maxsize = 10;

	sqList c;
	c.data = new int[InitSize];
	c.maxsize = 10;

	bool res = merge(a, b, c);
	//cout << res;
	for (int i = 0; i < c.length; i++)
	{
		cout << c.data[i]; 
	}


}