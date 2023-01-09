#include<iostream>
#include<stack>
#include<ctime>
using namespace std;




int main()
{
	srand((int)time(0));
	stack<double> s;
	for (int i = 0; i < 10; i++) {
		double t = 100 + 100 * (rand() / double(RAND_MAX));
		s.push(t);
	}
	for (int j = 0; j < 3; j++)
	{
		s.pop();
	}
	while (!s.empty()) {
		cout << s.top() << "  ";
		s.pop();
	}
	cout << endl;
	stack<string> name;
	name.push("ะกร๗");
	name.push("zhangsan");
	name.push("lisi");
	name.push("wangwu");
	name.push("dingliu");
	stack<string> name1 = name;
	while (!name1.empty())
	{
		cout << name1.top() << "  ";
		name1.pop();
	}
	cout << endl;



}