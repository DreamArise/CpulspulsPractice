#include<iostream>
using namespace std;

//设计一个人的类
class Peopel
{
public:
	//设计一个姓名
	void creatName(string name)
	{
		 m_name = name;
	}
	//获取一个姓名
	string getName()
	{
		return m_name;
	}

	void setAge(int age)
	{
		if (age > 18 || age < 0)
		{
			cout << "输入有误" << endl;
		}
		m_age = age;
	}
	void disAge()
	{
		cout << m_age << endl;
	}
private:
	//姓名 可读可写
	string m_name;
	//只读
	int m_age;
	//只写
	string m_love;
};



int main2()
{
	Peopel p1;
	//p1.m_name;
	p1.creatName("张三");
	p1.setAge(18);
	p1.disAge();
	cout<<p1.getName()<<endl;
	
	return 0;
}