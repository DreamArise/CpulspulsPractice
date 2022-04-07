//#include<iostream>
//using namespace std;
//
////继承方式：公共继承，保护继承，私有继承
//class Base
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
////用公共的方式继承
//class Son1 :public Base
//{
//public :
//	void fun()
//	{
//		m_a = 10;//父类中公共权限，子类公共权限
//		m_b = 18;//父类中保护，子类保护
//		//m_c = 10;//隐私不可访问
//	}
//
//
//};
//
//class Base2
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//class Son2 :protected Base2
//{
//public:
//	void fun()
//	{
//		m_a = 10;//父类中保护权限，子类保护权限
//		m_b = 18;//父类中保护，子类保护
//		//m_c = 10;//隐私不可访问
//	}
//};
//
//void test()
//{
//	Son1 s1;
//	s1.m_a = 100;
//	//s1.m_b = 10;//保护权限类外不可访问
//}
//
//void test2()
//{
//	Son2 s2;
//	
//}
//
//int main2()
//{
//	
//	return 0;
//}
//
