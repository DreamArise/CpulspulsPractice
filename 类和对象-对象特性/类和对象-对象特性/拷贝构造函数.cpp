//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	//构建一个默认构造函数
//	Person ()
//	{
//		cout << "这是一个默认构造函数" << endl;
//	}
//	//有参构造函数
//	Person (int age)
//	{
//		m_age = age;
//		cout << "这是一个有参构造函数" << endl;
//	}
//	//拷贝构造函数
//	Person (const Person& p)
//	{
//		m_age = p.m_age;
//		cout << "这一个拷贝构造函数" << endl;
//	}
//	//析构函数
//	~Person()
//	{
//		cout << "这是一个析构函数" << endl;
//	}
//	int m_age=0;
//};
//
////void test()
////{
////	Person p;
////	Person p2(10);
////	cout << p2.m_age << endl;
////	Person p3(p2);
////	cout << p3.m_age << endl;
////}
//
//int main2()
//{
//	//test();
//	system("pause");
//	return 0;
//}