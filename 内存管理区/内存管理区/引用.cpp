#include<iostream>
using namespace std;

int main4()
{
	int a = 20;
	//用一个别名去引用a
	//数据类型 &别名 原名
	int &b = a;
	b = 100;
	cout << b << endl;
	cout << a << endl;
	return 0;
}