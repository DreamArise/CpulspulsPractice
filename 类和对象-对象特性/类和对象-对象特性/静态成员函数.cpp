#include<iostream>
using namespace std;

class Wang
{
public:
	static void func()
	{
		cout << "func" << endl;
		m_a = 100;
		//m_b = 8;�޷����ֵ������ĸ�����
		cout << m_a << endl;
	}

	static int m_a;
	int m_b;
};

void test1()
{
	//ͨ������ͨ������
	Wang w;
	w.func();
	Wang::func();
}

int main()
{
	test1();
	return 0;
}

