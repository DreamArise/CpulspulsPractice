#include<iostream>
using namespace std;
#include"circle.h"
#include"point.h"

//设计一个点 和一个圆的类，判断点和圆的关系
//设计一个点类
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
//设计一个圆类
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
//	//圆心的坐标
//	Piont Center;//在一个类中，让另一个类作为自己的成员
//	//半径
//	int m_r;
//};

//创建一个全局函数判断点是否在圆上

void isInCircle(Circle& c, Piont& p)
{
	//计算点圆之间的距离的平方
	int distance =
		(c.GetC().GetX() - p.GetX()) * (c.GetC().GetX() - p.GetX()) +
		(c.GetC().GetY() - p.GetY()) * (c.GetC().GetY() - p.GetY());
	//计算半径的平方
	int R2 = c.GetR() * c.GetR();
	//判断是否相等
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
	//设置一个圆的对象
	Circle c;
	Piont center;
	center.SetX(10);
	center.SetY(0);
	//设置圆心（10,0）
	c.SetC(center);
	//设置半径
	c.SetR(10);
	//设置一个点的对象
	Piont p;
	p.SetX(10);
	p.SetY(10);
	isInCircle(c, p);

	return 0;
}