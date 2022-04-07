#include<iostream>
using namespace std;

//class CPP
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课，登录、注册......" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作......" << endl;
//	}
//	void left()
//	{
//		cout << "C++,Java,python" << endl;
//	}
//	void conten()
//	{
//		cout << "CPP 学习视频" << endl;
//	}
//};
//class JAVA
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课，登录、注册......" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作......" << endl;
//	}
//	void left()
//	{
//		cout << "C++,Java,python" << endl;
//	}
//	void conten()
//	{
//		cout << "JAVA 学习视频" << endl;
//	}
//};
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课，登录、注册......" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作......" << endl;
//	}
//	void left()
//	{
//		cout << "C++,Java,python" << endl;
//	}
//	void conten()
//	{
//		cout << "Python 学习视频" << endl;
//	}
//};
//void test()
//{
//	CPP cpp;
//	cpp.conten();
//	cpp.left();
//	cpp.header();
//	cpp.footer();
//	cout <<" ---------------- "<< endl;
//	JAVA java;
//	java.conten();
//	java.left();
//	java.header();
//	java.footer();
//	cout << " ---------------- " << endl;
//	Python python;
//	python.conten();
//	python.left();
//	python.header();
//	python.footer();
//	cout << " ---------------- " << endl;
//}
//继承的公共部分
class BasePage
{
public:
	void header()
	{
		cout << "首页、公开课，登录、注册......" << endl;
	}
	void footer()
	{
		cout << "帮助中心、交流合作......" << endl;
	}
	void left()
	{
		cout << "C++,Java,python" << endl;
	}
};
//cpp
//class 类名:public 公共的类名

class CPP:public BasePage
{
public:
	void conten()
	{
		cout << "CPP 学习视频" << endl;
	}
};
//java
class Java :public BasePage
{
public:
	void conten()
	{
		cout << "java 学习视频" << endl;
	}
};
//python
class Python :public BasePage
{
public:
	void conten()
	{
		cout << "python 学习视频" << endl;
	}
};
void test01()
{
	CPP cpp;
	cpp.conten();
	cpp.left();
	cpp.header();
	cpp.footer();
	cout <<" ---------------- "<< endl;
	Java java;
	java.conten();
	java.left();
	java.header();
	java.footer();
	cout << " ---------------- " << endl;
	Python python;
	python.conten();
	python.left();
	python.header();
	python.footer();
	cout << " ---------------- " << endl;
}



int main0()
{
	test01();
	return 0;
}

