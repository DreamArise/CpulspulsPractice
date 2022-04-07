//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	//同名成员的继承
//	static int m_a;//静态成员类内声明类外初始化
//};
//
//int Base::m_a = 100;
//
//class Son :public Base
//{
//public:
//	static int m_a;
//};
//int Son::m_a = 200;
//
//void test()
//{
//	Son s;
//	cout << "son中的m_a=" << s.m_a << endl;
//	cout << "Base中的m_a=" << s.Base::m_a << endl;
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//
