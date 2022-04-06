#include<iostream>
using namespace std;


//1、解决名称冲突
//2、返回对象本身return *this

class Personn
{
public:

	Personn(int age)
	{
		//age = age;
		//this指针指向被调用的成员函数，所属的对象
		this->age = age;
	}

	Personn& personAddage(Personn& p)
	{
		this->age += p.age;
		//返回对象本身
		return *this;
	}
	int age;
};
//1、解决命名冲突
void test1()
{ 
	Personn p(10);
	cout <<"p的年纪" << p.age << endl;
}
//2、返回对象本身
void test2()
{
	Personn p1(10);
	Personn p2(10);
	//链式编程
	p2.personAddage(p1).personAddage(p1).personAddage(p1);
	cout << "p2 的年龄为" << p2.age << endl;
}
int main()
{
	test1();
	test2();
	
	return 0;
}

