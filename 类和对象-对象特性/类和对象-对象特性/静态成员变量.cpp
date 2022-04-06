#include<iostream>
using namespace std;

class Pake
{
public:
	//静态成员变量
	//所有对象共用
	//编译阶段分配内存
	//类内定义，类外调用
	static int m_a;
	//int m_a=10;

};

int Pake:: m_a = 10;

//void test01()
//{
//	Pake p;
//	cout << p.m_a << endl;
//	Pake p2;
//	p2.m_a = 200;
//	cout << p.m_a << endl;
//
//}

void test02()
{
	//静态成员变量不属于某个对象，所有对象共同使用
	//有两种访问方法：1、通过对象访问2、通过类名访问
	/*Pake p;
	cout << p.m_a << endl;*/
	cout<<Pake::m_a<<endl;
	

}


int main6()
{
	//test01();
	test02();
	return 0;
}

