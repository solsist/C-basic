#include "BoyRing.h"
#include <iostream>

void BoyRing::countboy(int m)
{
	for (int i = 1; i <= m; i++)
	{
		pivot = pcur;
		pcur = pivot->next;
	}
}

void BoyRing::leave()
{
	pivot->next = pcur->next;
	pcur = pivot;
}

void BoyRing::print()const
{
	std::cout << pcur->node << "  ";
}

void BoyRing::printall()const
{
	boy* p = pcur;
	int line = 0;
	do {
		if (!(++line % 10)) {
			std::cout << "\n";
		}
		std::cout << p->node << " ";
		p = p->next;
	} while (p != pcur);
	std::cout << "\n";
}