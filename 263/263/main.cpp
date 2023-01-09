#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> vec;
	srand((unsigned)time(0));
	int n;
	cin >> n;
	int count = 0;
	int size = -1;
	int i = 1;

	while (count < 20 && count<n )
	{
		int popcount = 0;
		for (; i <= n; )
		{
			int opt = rand() % 2;
			switch (opt)
			{
			case 0:
				vec.push_back(i);
				i++;
				size++;
				break;
			case 1:
				if (size >= 0)
				{
					cout << vec[size];
					vec.pop_back();
					size--;
					popcount++;
					if (popcount == n)
						count++;
				}
				else
				{
					vec.push_back(i);
					i++;
					size++;
				}
				break;
			}
		}
		cout << endl;
		
	}
	
	
}