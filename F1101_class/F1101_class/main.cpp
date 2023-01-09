#include"Jose.h"
#include<iostream>


int main()
{
	int n, s, m, w;
	std::cout << "请输入总数，起始位置,间隔数和获胜人数:\n";
	std::cin >> n >> s >> m >> w;
	Jose jose(n, s, m, w);
	jose.winner();
}