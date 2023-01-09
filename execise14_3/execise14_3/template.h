#pragma once
#ifndef HEADER_TEMPLATE
#define HEADER_TEMPLATE


template<typename T>
class stack {
public:
	stack();
	virtual ~stack();
	void push(const T& a);
	void pop();
	T& top();
	const T& top()const;
	bool isempty()const;
private:
	enum { SIZE = 100 };
	T* s;
	int tos;

};

template<typename T>
stack<T>::stack():tos(-1),s(new T[SIZE])
{
}

template<typename T>
stack<T>::~stack()
{
	delete[] s;
}

template<typename T>
void stack<T>::push(const T& a)
{
	if (tos + 1 >= SIZE)
	{
		return;
	}
	tos++;
	s[tos] = a;

}

template<typename T>
void stack<T>::pop()
{
	if (tos == -1)
		return;
	tos--; 
}


template<typename T>
T& stack<T>::top()
{
	return s[tos];
}

template<typename T>
inline const T& stack<T>::top() const
{
	return s[tos];
}

template<typename T>
inline bool stack<T>::isempty()const
{
	return tos == -1 ? true : false;
}



#endif // !HEADER_TEMPLATE
