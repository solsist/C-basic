#include<iostream>
#include<iomanip>
using namespace std;

class Time {
	int hour, minute, second;
	void init();

public:
	Time(int h = 0, int m = 0, int s = 0);
	void set(int h, int m, int s) {
		hour = h;
		minute = m;
		second = s;
	}
	
	friend Time& operator++(Time& t);
	friend Time operator++(Time& a, int);
	friend ostream& operator<<(ostream& o, const Time& t);

};
Time& operator++(Time& t)
{
	if (!(t.second = (t.second + 1) % 60) && !(t.minute = (t.minute + 1) % 60))
	{
		t.hour = (t.hour + 1) % 24;
	}
	return t;
}
Time operator++(Time& a,int)
{
	Time t(a);
	if (!(a.second = (a.second + 1) % 60) && !(a.minute = (a.minute + 1) % 60))
	{
		a.hour = (a.hour + 1) % 24;
	}
	return t;
}
ostream& operator<<(ostream& o, const Time& t)
{
	o << setfill('0') << setw(2) << t.hour << ":" << setw(2) << t.minute << ":";
	return o << setw(2) << t.second << "\n" << setfill(' ');
}

void Time::init()
{
	if (hour < 0 || minute < 0 || second < 0 || hour>24 || minute>60 || second>60)
	{
		cout << "error";
		exit(1);
	}
}

Time::Time(int h, int m, int s)
{
	hour = h;
	minute = m;
	second = s;
	init();
}



int main()
{
	Time t;
	t.set(11, 59, 58);
	Time time(25, 59, 58);
	cout << t++;
	cout << ++t;
	cout << time++;
	cout << ++time;
}

