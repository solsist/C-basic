#include<iostream>
#include<vector>
using namespace std;

int main() {
	const int n = 8;
	const int m = 3;
	const int s = 8;
	vector<int> vec(n, 1);
	int p = s - 1;
	int count = 0;
	int n_z = 0;
	while (1)
	{
		while (count < m)
		{
			p = (p + 1) % n;
			if (vec[p] == 1)
			{
				count++;
			}
		}
		vec[p] = 0;
		count = 0;
		n_z++;
		if (n_z == n)
			break;
	}
	cout << p + 1;
}

