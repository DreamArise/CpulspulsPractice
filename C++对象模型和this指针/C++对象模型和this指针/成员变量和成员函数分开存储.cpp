#include<iostream>
using namespace std;

class Person
{
public:
	static void fun(){}//��̬��Ա��������������Ķ�����

	void fun(int a){}//�Ǿ�̬��Ա������������Ķ�����
	 
	static int m_a;// ��̬��Ա��������������Ķ�����

	int m_b;//�Ǿ�̬��Ա������������Ķ�����
};
int Person::m_a = 10;
int main1()
{
	Person p;
	cout << "sizeof of p=" << sizeof(p) << endl;
	return 0;
}

