#include <iostream>
using namespace std;
int j = 3;//j是全局变量

int val()
{
    int i = 1;
    return i;
}
int& ref()
{
    //   int j=3;j不能是局部变量！
    int& i = j;
    cout << "j的地址是: " << &j << endl;
    return i; //不能返回局部对象的引用
}

int main()
{

    int vv = val();
    int rv = val();//int   &rv = val()错误！val()返回的是一个int型的数，而给引用&rv 赋值的必须是一个同类型的变量。
    int vr = ref();
    int& rr = ref();
    cout << vv << endl;
    cout << rv << endl;
    cout << "vr的地址是  "<< &vr << endl;
    cout << "rr的地址是  "<< &rr << endl;
    return 0;
}