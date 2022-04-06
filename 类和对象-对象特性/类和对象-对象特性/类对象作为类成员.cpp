#include<iostream>
using namespace std;
#include <string>
class Phone
{
public:
	//构造函数初始化成员名
	Phone(string pname)
	{
		cout << "这是phone的构造函数" << endl;
		m_Pname = pname;
	}
	~Phone()
	{
		cout << "这是Phone的析构函数" << endl;
	}
	string m_Pname;
};



class Person
{
public:
	//构造函数初始化成员名 用列表的形式
	Person(string name, string phone) :m_name(name), m_phone(phone)
	{
		cout << "这是Person的构造函数" << endl;
	}

	~Person()
	{
		cout << "这是Person的析构函数" << endl;
	}

	string m_name;
	Phone m_phone;
};

void test()
{
	Person p("张三","苹果13");
	cout << p.m_name << "拿着" << p.m_phone.m_Pname << endl;
}

int main5()
{
	test();
	return 0;
}

