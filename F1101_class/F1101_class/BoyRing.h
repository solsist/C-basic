#pragma once
#include <exception>
struct boy {
	int node;
	boy* next;
};
class BoyRing
{
	boy* pcur;
	boy* pivot;
	boy* boyring;

public:
	BoyRing(int n){
		if (n < 2) throw std::exception();
		boyring = new boy[n];
		for (int i = 0; i < n; i++)
		{
			boyring[i].node = i + 1;
			boyring[i].next = &boyring[(i + 1) % n];
		}
		pcur = &boyring[n - 1];
		pivot = &boyring[n - 2];
	}
	~BoyRing() { delete[] boyring; }
	void countboy(int m);
	void leave();
	void print()const;
	void printall()const;

};

