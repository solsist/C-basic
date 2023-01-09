#include<iostream>
using namespace std;
#include <algorithm>
#include<vector>

template<class T>
class zs
{
public:
	T no;
	zs(const T& n_no):no(n_no) {};
	bool operator()(const T& n)
	{
		if (n != no) return false;
		cout << "第" << no << "号"<<endl;
		return true;
	}
};

template<typename T1,typename T2,typename T3>
T1 findif(const T1 begin, const T1 end, T2 pfun, T3 num)
{
	for (auto it = begin; it != end; it++)
	{
		if (pfun(*it,num) == true) return it;
	}
	return end;
}

template<typename T>
bool zsshow(const T no,const T num)
{
	if (no != num) return false;
	cout << "第" << no << "号" << endl;
	return true;

}


int main()
{
	vector<int> a({1,2,3,4,5,6,7,8});

	auto it = find_if(a.begin(), a.end(), zs<int>(8));
	if (it == a.end()) cout << "查找失败！";
	cout << "查找" << *it << "成功!"<<endl;

	auto it2 = findif(a.begin(), a.end(), zsshow<int>,3);
	if (it2 == a.end()) cout << "查找失败！";
	cout << "查找" << *it2 << "成功!";




}