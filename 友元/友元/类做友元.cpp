#include<iostream>
using namespace std;
#include<string>;
//������Ԫ
class Building;
class Goodgay
{
public:
	Goodgay();//��������
	void  visit();
	Building* building;
};

class Building
{
	friend class Goodgay;

public:

	Building();//��������

public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};
//����ʵ��
Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}
//����ʵ�� Ҫ����һ����������
Goodgay::Goodgay()
{
	building = new Building;
}

void Goodgay::visit()
{
	cout << "�û��������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "�û��������ڷ��ʣ�" << building->m_BedRoom << endl;

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

