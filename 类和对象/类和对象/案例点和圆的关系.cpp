#include<iostream>
using namespace std;
#include"circle.h"
#include"point.h"

//���һ���� ��һ��Բ���࣬�жϵ��Բ�Ĺ�ϵ
//���һ������
//class Piont
//{
//public:
//	//set X
//	void SetX(int x)
//	{
//		m_x1 = x;
//	}
//	//get X
//	int GetX()
//	{
//		return m_x1;
//	}
//	//set Y
//	 void SetY(int y)
//	{
//		m_y1 = y;
//	}
//	//get Y
//	 int GetY()
//	 {
//		 return m_y1;
//	 }
//private:
//	int m_x1;
//	int m_y1;
//};
//���һ��Բ��
//class Circle
//{
//public:
//	//set m_r
//	void SetR(int r)
//	{
//		m_r = r;
//	}
//	//get m-r
//	int GetR()
//	{
//		return m_r;
//	}
//
//	//set Center
//	void SetC(Piont center)
//	{
//		Center = center;
//	}
//	//get Center
//	Piont GetC()
//	{
//		return Center;
//	}
//private:
//	//Բ�ĵ�����
//	Piont Center;//��һ�����У�����һ������Ϊ�Լ��ĳ�Ա
//	//�뾶
//	int m_r;
//};

//����һ��ȫ�ֺ����жϵ��Ƿ���Բ��

void isInCircle(Circle& c, Piont& p)
{
	//�����Բ֮��ľ����ƽ��
	int distance =
		(c.GetC().GetX() - p.GetX()) * (c.GetC().GetX() - p.GetX()) +
		(c.GetC().GetY() - p.GetY()) * (c.GetC().GetY() - p.GetY());
	//����뾶��ƽ��
	int R2 = c.GetR() * c.GetR();
	//�ж��Ƿ����
	if (distance == R2)
	{
		cout << "on circle" << endl;
	}
	else if (distance > R2)
	{
		cout << "out of circle" << endl;
	}
	else
	{
		cout << "inside circle" << endl;
	}
}

int main()
{
	//����һ��Բ�Ķ���
	Circle c;
	Piont center;
	center.SetX(10);
	center.SetY(0);
	//����Բ�ģ�10,0��
	c.SetC(center);
	//���ð뾶
	c.SetR(10);
	//����һ����Ķ���
	Piont p;
	p.SetX(10);
	p.SetY(10);
	isInCircle(c, p);

	return 0;
}