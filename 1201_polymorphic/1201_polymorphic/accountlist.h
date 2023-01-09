#pragma once
#ifndef HEADER_ACCOUNTLIST
#define HEADER_ACCOUNTLIST
#include"account.h"

class Node {

public:
	Node* next;
	Node* prev;
	Account* acnt;

public:
	Node(Account* a) :next(0), prev(0), acnt(a) {}
	bool operator==(const Node& n)const { return *acnt == *n.acnt; }
	~Node() { delete acnt; }
};


class AccountList {

	Node* first;
	int size;

public:
	AccountList():first(0),size(0){}
	Node* getfirst()const { return first; }
	int getsize()const { return size; }
	void add(Account* a);
	void remove(string& acnt);
	Account* find(string& acnt)const;
	bool isempty()const { return !size; }
	void display()const;
	virtual ~AccountList();
};



#endif // !HEADER_ACCOUNTLIST
