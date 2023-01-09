#include<iostream>
using namespace std;

class CAT {
	int* itsAge;
public:
	CAT() :itsAge(new int(6)) {}
	CAT(const CAT& cat);
	~CAT() { delete itsAge; }
	int getAge()const { return *itsAge; }
	void setAge(int age) { *itsAge = age; }

};

CAT::CAT(const CAT& cat)
{
	itsAge = new int;
	*itsAge = *cat.itsAge;
}


int main()
{
	CAT frisky;
	cout << "frisky's age: " << frisky.getAge() << endl;
	cout << "Setting frisky to 6...\n";
	frisky.setAge(6);
	cout << "Creating boots from frisky\n";
	CAT boots(frisky);
	cout << "frisky's age: " << frisky.getAge() << endl;
	cout << "boots' age: " << boots.getAge() << endl;
	cout << "setting frisky to 7...\n";
	frisky.setAge(7);
	cout << "frisky's age: " << frisky.getAge() << endl;
	cout << "boots' age: " << boots.getAge() << endl;
}