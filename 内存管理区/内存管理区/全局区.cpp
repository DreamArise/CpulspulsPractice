#include<iostream>
using namespace std;

//全局变量
int g_a = 3;
int g_b = 5;

//const的修饰的全局变量  全局常量

const int c_g_a = 10;

int main1()
{
	//普通局部变量
	int a = 10;
	int b = 20;
	cout << "局部变量a的地址" << (int)&a << endl;
	cout << "局部变量b的地址" << (int)&b << endl;

	cout << "全局变量g_a的地址" << (int)&g_a << endl;
	cout << "全局变量g_b的地址" << (int)&g_b << endl;

	//静态变量
	static int s_a = 10;
	static int s_b = 18;
	cout << "静态变量s_a的地址" << (int)&s_a << endl;
	cout << "静态变量s_b的地址" << (int)&s_b << endl;

	//字符串常量
	cout << "字符串常量的地址" << (int)&"hello world" << endl;
	cout << "字符串常量的地址" << (int)&"b" << endl;

	//const 修饰的全局变量 ，const 修饰局部变量
	//const 修饰的局部变量 局部常量
	const int c_a = 10;
	cout << "全局常量的地址" << (int)&c_g_a << endl;
	cout << "局部常量的地址" << (int)&c_a << endl;

	system("pause");
	return 0;
}