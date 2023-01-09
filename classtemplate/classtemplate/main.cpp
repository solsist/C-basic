#include<iostream>
using namespace std;

template<typename T>
struct Node
{
	Node(const T& d) :c(d), prev(0), next(0) {};
	T c;
	Node* prev, * next;
};

template<typename T>
class List {
	Node<T> *first, *last;
public:
	List();
	void add(const T& c);
	void remove(T& c);
	Node<T>* find(const T& c);
	void print();
	~List();
};

template<typename T>
List<T>::List() :first(0),last(0) {
	
}

template<typename T>
void List<T>::add(const T& c)
{
	Node<T>* n = new Node<T>(c);
	if (!first || !last)
	{
		first = n;
		last = n;
	}
	else
	{
		last->next = n;
		n->prev = last;
		last = n;
	}
}

template<typename T>
void List<T>::remove(T& c)
{
	Node<T>* n = find(c);
	if (!n)
		return;
	(n->prev ? n->prev->next : first) = n->next;
	(n->next ? n->next->prev : last) = n->prev;
	delete n;
}

template<typename T>
Node<T>* List<T>::find(const T& c)
{
	for (Node<T>* f = first; f != last; f = f->next)
	{
		if (f->c == c)
			return f;
	}
}

template<typename T>
void List<T>::print()
{
	for (Node<T>* f = first; f; f = f->next)
	{
		cout << f->c << endl;
	}
}

template<typename T>
List<T>::~List() {
	for (Node<T>* n; n = first;delete n)
	{
		first = first->next;
	}
}

class Cat {
	string name;
public:
	Cat(const string& n) :name(n) {};
	bool operator==(const Cat& c) { return name == c.name; }
	friend ostream& operator<<(ostream& o,const Cat& s) { return o << s.name; }
};

template<>
class List<Cat>{

	Node<Cat> * first, * last;
public:
	List();
	void add(const Cat& c);
	void remove(Cat& c);
	Node<Cat>* find(const Cat& c);
	void print();
	~List();
};

List<Cat>::List() :first(0), last(0) {

}

void List<Cat>::add(const Cat& c)
{
	if (find(c))
		return;
	Node<Cat>* n = new Node<Cat>(c);
	//n->next = first; first = n;
	//(last ? n->next->prev : last) = n;
	if (!first || !last)
	{
		first = n;
		last = n;
	}
	else
	{
		last->next = n;
		n->prev = last;
		last = n;
	}
	
	
}

void List<Cat>::remove(Cat& c) {

	Node<Cat>* n = find(c);
	if (!n)
		return;
	(n->prev ? n->prev->next : first) = n->next;
	(n->next ? n->next->prev : last) = n->prev;
	delete n;

}

Node<Cat>* List<Cat>::find(const Cat& c) {
	for (Node<Cat>* f = first; f; f = f->next)
	{
		if (f->c == c)
			return f;
	}
	return 0;
}

void List<Cat>::print()
{
	for (Node<Cat>* f = first; f; f = f->next)
	{
		cout << f->c << endl;
	}
}

List<Cat>::~List()
{
	for (Node<Cat>* f; f = first; delete f)
	{
		first = first->next;
	}
}

int main()
{
	/*List<Cat> clist;
	clist.add(Cat("alice"));
	clist.add(Cat("luna"));
	clist.print();
	List<double> l;
	l.add(1.1);
	l.add(1.2);
	l.print();
	*/
	int a = 1;
	int* b = &a;
	double c = 2.0;
	double* d = &c;
	cout << &b << endl;
	cout << b << endl;
	cout << &d << endl;
	cout << d << endl;
}