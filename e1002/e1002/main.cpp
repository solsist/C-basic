#include<iostream>
using namespace std;

class transportation
{
public:
	transportation() { cout << "Constructing transportation\n"; }
	void start() { cout << "started\n"; };
	void stop(){ cout << "stopped\n"; };
};


class plane :public transportation {
public:
	plane() { cout << "Constructing plane\n"; }
};

class automobile :public transportation {
public:
	automobile() { cout << "Constructing automobile\n"; }
};

class train :public transportation {
public:
	train() { "Constructing train\n"; }
};

class car :public automobile {
public:
	car() { cout << "Constructing car\n"; }
	void start() { cout << "Car started\n"; }
	void stop() { cout << "Car stopped\n"; }
};

class truck :public automobile {
public:
	truck() { cout << "Constructing truck\n"; }
};

class bus :public automobile {
public:
	bus() { cout << "Constructing bus\n"; }
	void start() { cout << "bus started\n"; }
	void stop() { cout << "bus stopped\n"; }
};

class toolcart :public car {
public:
	toolcart() { cout << "Consturcting toolcart\n"; }
};

class carriage :public car {
public:
	carriage() { cout << "Constructing carriage\n"; }
};

class smallvan :public car {
public:
	smallvan() { cout << "Constructing smallvan\n"; }
};

class audi :public carriage {
public:
	audi() { cout << "Constructing audi\n"; }
};

class honda :public carriage {
public:
	honda() { cout << "Constructing honda\n"; }
	void start() { cout << "honda started\n"; }
	void stop() { cout << "honda stopped\n"; }
};

class bora :public carriage {
public:
	bora() { cout << "Constructing bora\n"; }
};

int main()
{
	bus b;
	honda h;
	b.start();
	h.stop();
	b.transportation::start();



}