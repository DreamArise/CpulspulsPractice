#include<iostream>
using namespace std;


//1��������Ƴ�ͻ
//2�����ض�����return *this

class Personn
{
public:

	Personn(int age)
	{
		//age = age;
		//thisָ��ָ�򱻵��õĳ�Ա�����������Ķ���
		this->age = age;
	}

	Personn& personAddage(Personn& p)
	{
		this->age += p.age;
		//���ض�����
		return *this;
	}
	int age;
};
//1�����������ͻ
void test1()
{ 
	Personn p(10);
	cout <<"p�����" << p.age << endl;
}
//2�����ض�����
void test2()
{
	Personn p1(10);
	Personn p2(10);
	//��ʽ���
	p2.personAddage(p1).personAddage(p1).personAddage(p1);
	cout << "p2 ������Ϊ" << p2.age << endl;
}
int main()
{
	test1();
	test2();
	
	return 0;
}

