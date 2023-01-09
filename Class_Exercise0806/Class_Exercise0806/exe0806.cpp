#include<iostream>
#include"exe0806.h"
using namespace std;

int leisure(int time, Car& aobj, Boat& bobj)
{
	return time * aobj.getSize() * bobj.getSize();
}