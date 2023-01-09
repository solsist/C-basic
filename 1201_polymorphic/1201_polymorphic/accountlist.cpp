#include"accountlist.h"

void AccountList::add(Account* a)
{
	Node* pn = new Node(a);
	if (first)
	{
		pn->next = first;
		first->prev = pn;
	}
	first = pn;
	size++;
}



void AccountList::remove(string& acnt)
{
	for (Node* p = first; p; p = p->next)
	{
		if (p->acnt->getAcnt() == acnt)
		{
			if (p->prev)
			{
				p->prev->next = p->next;
			}
			if (p->next)
			{
				p->next->prev = p->prev;
			}
			if (p == first)
			{
				first = p->next;
			}
			delete p;
			size--;
			break;
		}
		
	}
}

Account* AccountList::find(string& acnt)const
{
	for (Node* p = first; p; p = p->next)
	{
		if (p->acnt->getAcnt() == acnt)
		{
			return (p->acnt);
		}
	}
	return 0;
}

void AccountList::display()const
{
	cout << "There are " << size << " accounts.\n";
	for (Node* p = first; p; p = p->next)
	{
		p->acnt->display();
	}
}

AccountList::~AccountList()
{
	for (Node* p = first; p = first; delete p) {
		first = first->next;
	}
}
