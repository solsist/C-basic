#include<iostream>
using namespace std;

void count(int m);
struct Jose {
	int Node;
	Jose* next;
};

int n, s, m;
Jose* pivot;
Jose* pcur;

Jose* creating()
{
	Jose* px = new Jose[n];
	for (int i = 1; i <= n; i++)
	{
		px[i - 1].next = &px[i % n];
		px[i - 1].Node = i;
	}
	pivot = &px[n - 2];
	pcur = &px[n - 1];
	cout << pivot->Node << "    " << pcur->Node << endl;
	count(s);
	return px;
}

void count(int m)
{
	for (int i = 0; i < m;i++)
	{
		pivot = pcur;
		pcur = pivot->next;
	}
}


bool getValue()
{
	cout << "输入个数，初始位置和间隔数：\n";
	cin >> n >> s >> m;
	if (n >= 2 && s >= 1 && s <= n && m >= 1 && m <= n)
	{
		return true;
	}
	cerr << "输入错误\n";
	return false;
}

void process()
{
	for (int i = 1; i < n; i++)
	{
		count(m);
		static int line = 0;
		cout << "  " << pcur->Node;
		if (!(++line % 10))
			cout << "\n";
		pivot->next = pcur->next;
		cout << i << "   " << pivot->Node << "  " << pcur->Node << endl;
		pcur = pivot;

	}
}
int main()
{
	if (!getValue()) return 1;
	Jose* jose = creating();
	process();
	cout << "\n" << pcur->Node << endl;
	delete[] jose;


}


