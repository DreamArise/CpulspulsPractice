#include<iostream>
using namespace std;

class Person
{
public:
	static void fun(){}//静态成员函数，不属于类的对象上

	void fun(int a){}//非静态成员函数，属于类的对象上
	 
	static int m_a;// 静态成员变量，不属于类的对象上

	int m_b;//非静态成员变量不属于类的对象上
};
int Person::m_a = 10;
int main1()
{
	Person p;
	cout << "sizeof of p=" << sizeof(p) << endl;
	return 0;
}

