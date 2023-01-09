#include"Date.h"
void Date::init()
{
	if (year > 5000 || year < 1 || month < 1 || month>12 || day < 1 || day>31)
	{
		exit(1);
	}
}

Date::Date(const string& s)
{
	year = atoi(s.substr(0, 4).c_str());
	month = atoi(s.substr(5, 2).c_str());
	day = atoi(s.substr(8, 2).c_str());
	init();
}


bool Date::isLeapYear()const
{
	return (year % 4 == 0 && year % 100) || year % 400 == 0;
}

ostream& operator<<(ostream& o, const Date& d)
{
	o << setfill('0') << setw(4) << d.year << '-' << setw(2) << d.month << '-';
	return o << setw(2) << d.day << '\n' << setfill(' ');
}


const int Date::tians[] = { 0,31,59,90,120,151,181,212,243,273,304,334 };
const int Y400 = 146097;
const int Y100 = 36524;
const int Y4 = 1461;

void Date::i2ymd(int absDay) {
	year = absDay / Y400 * 400;
	int y = absDay % Y400;
	if (y == Y400 - 1) { month = 12, day = 30; return; }
	year += y / Y100 * 100;
	y %= Y100;
	year += y / Y4 * 4;
	y %= Y4;
	if (y == Y4 - 1) { month = 12, day = 30; return; }
	year += y / 365;
	y %= 365;
	if (y == 0) { month = 12, day = 31; return; }
	year++;
	bool leap = isLeapYear();
	for (month = 1; month<12 && y>tians[month] + (month >= 2 && leap); month++);
	day = y - tians[month - 1];
}

int Date::ymd2i()const {
	int yearDay = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
	return yearDay + tians[month - 1] + (isLeapYear() && month > 2) + day;
}