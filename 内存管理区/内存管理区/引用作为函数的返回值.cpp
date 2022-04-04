#include<iostream>
using namespace std;


//不能返回局部变量
//返回局部变量引用（错误）
int& fun()
{
	int a = 10;
	return a;
}

//返回静态变量引用
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

	fun2() = 199;//如果函数返回值是引用，则可以做为左值
	cout << "ret2=" << ret2 << endl;
	cout << "ret2=" << ret2 << endl;
	return 0;
}