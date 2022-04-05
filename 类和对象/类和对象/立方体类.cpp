#include<iostream>
using namespace std;

//设计一个立方体，求面积
class Cube
{
public:
	//设置长宽高函数
	void Set(int l, int w, int h)
	{
		m_lenth = l;
		m_with = w;
		m_high = h;
	}
	//求面积
	int clcM()
	{
		return 2 * (m_high * m_lenth + m_high * m_with + m_with * m_lenth);
	}
	//求体积
	int clcT()
	{
		return (m_high * m_lenth * m_with);
	}
	//定义一个成员函数判断两个立方体是否相等
	bool isSamebyClass(Cube& cube2)
	{
		bool ret1 = ((clcM() == cube2.clcM()) ? true : false);
		bool ret2 = ((clcT() == cube2.clcT()) ? true : false);
		if (ret1 == 0 || ret2 == 0)
		{
			return false;
		}
		return true;
	}
private:
	int m_lenth;
	int m_with;
	int m_high;
};

//使用全局函数判断成员是否相等
bool isSame( Cube &cube, Cube &cube2)
{
	bool ret1= ((cube.clcM() == cube2.clcM()) ? true : false);
	bool ret2 = ((cube.clcT() == cube2.clcT()) ? true : false);
	if (ret1==0 || ret2==0)
	{
		return false;
	}

	return true;
}

int main3()
{
	Cube cube;
	cube.Set(10, 10, 10);
	cout << "面积为："<<cube.clcM() << endl;
	cout << "体积为：" << cube.clcT() << endl;
	Cube cube2;
	cube2.Set(10, 10, 10);
	cout << "面积为：" << cube2.clcM() << endl;
	cout << "体积为：" << cube2.clcT() << endl;
	bool ret0=isSame(cube,cube2);
	if (ret0)
	{
		cout << "相等" << endl;
	}
	else
		cout << "不相等" << endl;

	bool ret = cube.isSamebyClass(cube2);
	if (ret)
	{
		cout << "成员函数判断的相等" << endl;
	}
	else
		cout << "成员函数判断的不相等" << endl;
	return 0;
}