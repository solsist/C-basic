#include <iostream>
using namespace std;
int j = 3;//j��ȫ�ֱ���

int val()
{
    int i = 1;
    return i;
}
int& ref()
{
    //   int j=3;j�����Ǿֲ�������
    int& i = j;
    cout << "j�ĵ�ַ��: " << &j << endl;
    return i; //���ܷ��ؾֲ����������
}

int main()
{

    int vv = val();
    int rv = val();//int   &rv = val()����val()���ص���һ��int�͵�������������&rv ��ֵ�ı�����һ��ͬ���͵ı�����
    int vr = ref();
    int& rr = ref();
    cout << vv << endl;
    cout << rv << endl;
    cout << "vr�ĵ�ַ��  "<< &vr << endl;
    cout << "rr�ĵ�ַ��  "<< &rr << endl;
    return 0;
}