#include<iostream>
using namespace std;
#include <string>
class Phone
{
public:
	//���캯����ʼ����Ա��
	Phone(string pname)
	{
		cout << "����phone�Ĺ��캯��" << endl;
		m_Pname = pname;
	}
	~Phone()
	{
		cout << "����Phone����������" << endl;
	}
	string m_Pname;
};



class Person
{
public:
	//���캯����ʼ����Ա�� ���б����ʽ
	Person(string name, string phone) :m_name(name), m_phone(phone)
	{
		cout << "����Person�Ĺ��캯��" << endl;
	}

	~Person()
	{
		cout << "����Person����������" << endl;
	}

	string m_name;
	Phone m_phone;
};

void test()
{
	Person p("����","ƻ��13");
	cout << p.m_name << "����" << p.m_phone.m_Pname << endl;
}

int main5()
{
	test();
	return 0;
}

