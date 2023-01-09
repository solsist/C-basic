#include<iostream>
#include"exe0802.h"
using namespace std;


int main()
{
	Cat frisky;
	frisky.setAge(5);
	frisky.meow();
	cout << "frisky is a cat who is " << frisky.getAge() << " years old.\n";
	frisky.meow();
}