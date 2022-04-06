#include<iostream>
using namespace std;
#include<string>;
//类做友元
class Building;
class Goodgay
{
public:
	Goodgay();//类内声明
	void  visit();
	Building* building;
};

class Building
{
	friend class Goodgay;

public:

	Building();//类内声明

public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};
//类外实现
Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}
//类外实现 要加上一个所属的类
Goodgay::Goodgay()
{
	building = new Building;
}

void Goodgay::visit()
{
	cout << "好基友类正在访问：" << building->m_SittingRoom << endl;
	cout << "好基友类正在访问：" << building->m_BedRoom << endl;

}
void test()
{
	Goodgay gg;
	gg.visit();
}
int main2()
{
	test();
	return 0;
}

