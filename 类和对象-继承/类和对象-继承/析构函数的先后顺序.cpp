//#include<iostream>
//using namespace std;
//
////父类子类的析构函数
////特点，栈的原则 先进后出，构造函数父类先创建，析构相反
//class Base
//{
//public:
//	Base()
//	{
//		cout << "这是父类中的构造函数" << endl;
//	}
//	~Base()
//	{
//		cout << "这是父类中的析构函数" << endl;
//	}
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "这是子类中的构造函数" << endl;
//	}
//	~Son()
//	{
//		cout << "这是子类中的析构函数" << endl;
//	}
//};
//
//void test()
//{
//	Son s;
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//
