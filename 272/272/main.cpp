#include<iostream>
#include<fstream>
using namespace std;

class node {
public:
	int val;
	node* next;
	node(int value):val(value),next(0) {};
};

class list {
	node* head;
	node* re;
	int length;
public:
	list():length(0),head(0),re(0) {};
	void add(int number);
	void showlist();
	void min();
	int find(int idx);
	~list();
};

void list::add(int number)
{
	node* p = new node(number);
	if (!re)
	{
		re = p;
		head = re;
	}
	else
	{
		re->next = p;
		re = p;
	}
	length++;
}

void list::showlist()
{
	for (node* p = head; p; p = p->next)
	{
		cout << p->val<<endl;
	}
}

int list::find(int idx)
{
	node* p = head;
	for (int i = 1; i < idx; i++)
	{
		p = p->next;
	}
	return p->val;
}

void list::min()
{
	for (int i = 2; i <= length; i++)
	{
		int tempval = 0;
		int tempj = 0;
		for (int j = 1; j < i; j++)
		{
			int value = abs(find(i) - find(j));
			if (j == 1)
			{
				tempval = value;
				tempj = 1;
			}
			if (value < tempval)
			{
				tempval = value;
				tempj = j;
			}
			if (value == tempval)
			{
				if (find(j) < find(tempj))
				{
					tempj = j;
				}
			}

		}
		cout << tempval << " " << tempj << endl;
	}
}
list::~list()
{
	for (node* p = head; p;)
	{
		node* k = p;
		p = p->next;
		delete k;
	}
}

int main()
{
	int number;
	cin >> number;
	list l;
	double value;
	for (int i = 1; i<=number;i++)
	{
		cin >> value;
		l.add(value);
	}
	l.min();

}