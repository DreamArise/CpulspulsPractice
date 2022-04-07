//#include<iostream>
//using namespace std;
//
//class Base
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//
//class Son:public Base
//{
//
//public:
//	int m_d;
//};
//
//void test()
//{
//	Son s;//16个字节  私有属性也继承了只是被系统隐藏了看不到
//	cout << "sizeof(s)= " << sizeof(s) << endl;
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//
