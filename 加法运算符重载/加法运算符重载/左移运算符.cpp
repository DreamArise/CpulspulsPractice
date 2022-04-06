#include<iostream>
using namespace std;

//左移运算符重载
class Tom
{
	friend ostream& operator<<(ostream& cout, Tom& tom);
	////成员函数重载运算符
	//void Tom()
public:
	Tom(int a,int b)
	{
		m_a = a;
		m_b = b;
	}
private:

	int m_a;
	int m_b;
};

//利用全局函数重载左移运算符
ostream& operator<<(ostream &cout, Tom& tom)
{
	cout << tom.m_a << tom.m_b;
	return cout;
}

void test1()
{
	Tom tom(10,10);
	/*tom.m_a = 10;
	tom.m_b = 10;*/
	cout << tom<<endl;
}
int main2()
{
	test1();
	system("pause");
	return 0;
}

