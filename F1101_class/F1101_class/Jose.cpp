#include"Jose.h"
#include"BoyRing.h"
void Jose::winner()const
{
	std::cout << "开始求解,小孩总数为" << n << std::endl;
	BoyRing boy(n);
	boy.countboy(s);
	for (int i = 1; i < n - w + 1; i++)
	{
		boy.countboy(m);
		boy.print();
		boy.leave();
	}
	std::cout << "\n";
	boy.printall();
}
