#include<iostream>
using namespace std;

class Wang
{
public:
	static void func()
	{
		cout << "func" << endl;
		m_a = 100;
		//m_b = 8;无法区分到底是哪个对象
		cout << m_a << endl;
	}

	static int m_a;
	int m_b;
};

void test1()
{
	//通过对象、通过类名
	Wang w;
	w.func();
	Wang::func();
}

int main()
{
	test1();
	return 0;
}

