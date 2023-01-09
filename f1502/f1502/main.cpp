#include<iostream>
#include<fstream>
#include<string>
using namespace std;


void procFileName(string s);
bool procOpenMode(string s);
bool openIn(string s);
bool openOut(string s);

int main()
{
	
	procFileName("iabc");
	procFileName("oabc");
}

void procFileName(string s)
{
	for (char c = '0'; c < '9'; c++)
	{
		if (!procOpenMode(s + c + ".txt")) {
			cout << "error opening " << s << " not existed.\n";
			return;
		}
		
	}
}

bool procOpenMode(string s)
{
	if (s[0] == 'i')
		if (!openIn(s))
			return false;
		else
			return true;
	else
		if (!openOut(s))
			return false;
		else
			return true;
}

bool openIn(string s)
{
	ifstream in(s.c_str());
	if (!in)return false;
	for (string line; getline(in, line); cout << line << endl);
	return true;
}

bool openOut(string s)
{
	fstream out(s.c_str(), ios::in | ios::out | ios::ate);
	if (!out)return false;
	cout << s + " is here.\n";
	out << s + " is ok.\n";
	out.close();
	return true;
}

