#include"Jose.h"
#include<iostream>


int main()
{
	int n, s, m, w;
	std::cout << "��������������ʼλ��,������ͻ�ʤ����:\n";
	std::cin >> n >> s >> m >> w;
	Jose jose(n, s, m, w);
	jose.winner();
}