#include<iostream>
#include<vector>
#include<list>
using namespace std;

template<typename T,typename T1>
void bsort(const T begin,const T end,T1 pfunc)
{
	while (true)
	{
		bool flag = false;
		for (auto it = begin;;)
		{
			auto left = it;
			it++;
			auto right = it;
			if (right == end) break;
			//if (*left < *right)
			if (pfunc(*left, *right) == true) continue;
			auto temp = *left;
			*left = *right;
			*right = temp;
			flag = true;
			
		}
		if (flag == false) break;
	}
}

template<typename T>
bool _less(const T& left, const T& right)
{
	return left >= right;
}

template<typename T>
bool _greater(const T& left, const T& right)
{
	return left <= right;
}

template<class T>
class less_
{
public:
	bool operator()(const T left, const T right)
	{
		return left >= right;
	}

};

template<class T>
class greater_
{
public:
	bool operator()(const T left, const T right)
	{
		return left <= right;
	}

};


int main()
{
	vector<int> a({ 5,7,2,3,9,5 });
	bsort(a.begin(), a.end(),_greater<int>);
	for (auto it : a)
	{
		cout << it << "  ";
	}
	bsort(a.begin(), a.end(), greater_<int>());
	for (auto it : a)
	{
		cout << it << "  ";
	}
}