#include<iostream>
using namespace std;

//���һ�������壬�����
class Cube
{
public:
	//���ó���ߺ���
	void Set(int l, int w, int h)
	{
		m_lenth = l;
		m_with = w;
		m_high = h;
	}
	//�����
	int clcM()
	{
		return 2 * (m_high * m_lenth + m_high * m_with + m_with * m_lenth);
	}
	//�����
	int clcT()
	{
		return (m_high * m_lenth * m_with);
	}
	//����һ����Ա�����ж������������Ƿ����
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

//ʹ��ȫ�ֺ����жϳ�Ա�Ƿ����
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
	cout << "���Ϊ��"<<cube.clcM() << endl;
	cout << "���Ϊ��" << cube.clcT() << endl;
	Cube cube2;
	cube2.Set(10, 10, 10);
	cout << "���Ϊ��" << cube2.clcM() << endl;
	cout << "���Ϊ��" << cube2.clcT() << endl;
	bool ret0=isSame(cube,cube2);
	if (ret0)
	{
		cout << "���" << endl;
	}
	else
		cout << "�����" << endl;

	bool ret = cube.isSamebyClass(cube2);
	if (ret)
	{
		cout << "��Ա�����жϵ����" << endl;
	}
	else
		cout << "��Ա�����жϵĲ����" << endl;
	return 0;
}