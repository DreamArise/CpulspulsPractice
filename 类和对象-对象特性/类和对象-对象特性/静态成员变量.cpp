#include<iostream>
using namespace std;

class Pake
{
public:
	//��̬��Ա����
	//���ж�����
	//����׶η����ڴ�
	//���ڶ��壬�������
	static int m_a;
	//int m_a=10;

};

int Pake:: m_a = 10;

//void test01()
//{
//	Pake p;
//	cout << p.m_a << endl;
//	Pake p2;
//	p2.m_a = 200;
//	cout << p.m_a << endl;
//
//}

void test02()
{
	//��̬��Ա����������ĳ���������ж���ͬʹ��
	//�����ַ��ʷ�����1��ͨ���������2��ͨ����������
	/*Pake p;
	cout << p.m_a << endl;*/
	cout<<Pake::m_a<<endl;
	

}


int main6()
{
	//test01();
	test02();
	return 0;
}

