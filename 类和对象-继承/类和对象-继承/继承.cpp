#include<iostream>
using namespace std;

//class CPP
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Σ���¼��ע��......" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ���������......" << endl;
//	}
//	void left()
//	{
//		cout << "C++,Java,python" << endl;
//	}
//	void conten()
//	{
//		cout << "CPP ѧϰ��Ƶ" << endl;
//	}
//};
//class JAVA
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Σ���¼��ע��......" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ���������......" << endl;
//	}
//	void left()
//	{
//		cout << "C++,Java,python" << endl;
//	}
//	void conten()
//	{
//		cout << "JAVA ѧϰ��Ƶ" << endl;
//	}
//};
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Σ���¼��ע��......" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ���������......" << endl;
//	}
//	void left()
//	{
//		cout << "C++,Java,python" << endl;
//	}
//	void conten()
//	{
//		cout << "Python ѧϰ��Ƶ" << endl;
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
//�̳еĹ�������
class BasePage
{
public:
	void header()
	{
		cout << "��ҳ�������Σ���¼��ע��......" << endl;
	}
	void footer()
	{
		cout << "�������ġ���������......" << endl;
	}
	void left()
	{
		cout << "C++,Java,python" << endl;
	}
};
//cpp
//class ����:public ����������

class CPP:public BasePage
{
public:
	void conten()
	{
		cout << "CPP ѧϰ��Ƶ" << endl;
	}
};
//java
class Java :public BasePage
{
public:
	void conten()
	{
		cout << "java ѧϰ��Ƶ" << endl;
	}
};
//python
class Python :public BasePage
{
public:
	void conten()
	{
		cout << "python ѧϰ��Ƶ" << endl;
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

