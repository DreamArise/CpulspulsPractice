#include<iostream>
using namespace std;


//���ܷ��ؾֲ�����
//���ؾֲ��������ã�����
int& fun()
{
	int a = 10;
	return a;
}

//���ؾ�̬��������
int& fun2()
{
	static int b = 3;
	return b;
}

int main()
{
	/*int& ret = fun();*/
	int& ret2 = fun2();
	cout << "ret2=" << ret2 << endl;
	cout << "ret2=" << ret2 << endl;
	//cout << "ret=" << ret << endl;
	//cout << "ret=" << ret << endl;

	fun2() = 199;//�����������ֵ�����ã��������Ϊ��ֵ
	cout << "ret2=" << ret2 << endl;
	cout << "ret2=" << ret2 << endl;
	return 0;
}