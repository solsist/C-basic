#include<iostream>
using namespace std;


class Student {
	string name;
public:
	Student(string s):name(s) {}
	virtual void display() { cout << "I'm a Student\n"; }

};

class GraduateStudent :public Student {
	string name;
public:
	GraduateStudent(string s) :Student(s) { name = s; }
	void display() { cout << "I'm a graduatestudent\n"; }
	void getname() { cout << name << "\n"; }

};

int main()
{

	Student a("A");
	GraduateStudent b("B");
	GraduateStudent* c = &b;
	Student* d = &a;
	//Student* s = dynamic_cast<Student*>(c);
	GraduateStudent* s;
	if ( s = dynamic_cast<GraduateStudent*>(d))
	{
		cout << "1111";
	}
	else
	{
		cout << "2222";
	}
	s->display();


}
