#include<iostream>
#include"exe0807.h"
using namespace std;

void setValue(Animal& ta, int tw, int tn)
{
	ta.setAge(tw);
	ta.setWeight(tn);
}
int main()
{
	Animal puppey;
	setValue(puppey, 7, 9);
	puppey.getAge();
	puppey.getWeight();

}