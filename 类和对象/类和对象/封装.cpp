#include<iostream>
using namespace std;
#include <string>

//���һ��Բ�࣬��Բ���ܳ�
//����������ԡ���Ϊ
const double PI = 3.14;
class Circle
{
	//�������Ȩ��
	//Ϊ����Ȩ��
public:
	//���ԣ�Բ�İ뾶
	int m_r;
	//��Ϊ����Բ���ܳ���һ����һ������
	double clc()
	{
		return 2 * PI * m_r;
	}
};

//���һ��ѧ���࣬������������ѧ�ţ����Ը�ֵ������չʾ

class Student
{
public:
	//����ѧ����������ѧ��
	struct Stu
	{
		string id;
		string name;
	};
	Stu stu[2];
	////��Ϊ ��ѧ�����и�ֵ��չʾ
	void creatStu(string id,string name,int number)
	{
		for (int i = 0; i < number; i++)
		{
			stu[i].name = name;
			stu[i].id = id;
		}
	}
	//��Ϊ ��ʾ��Щѧ��
	void displayStu(int number)
	{
		for (int i = 0; i < number; i++)
		{
			cout << stu[i].id << stu[i].name << endl;
		}
	}
};



int main1()
{
	////ͨ��Բ�࣬����һ��Բ�Ķ���c1
	//Circle c1;
	////���������Խ��и�ֵ
	//c1.m_r = 10;
	//cout << "Բ���ܳ���" << c1.clc() << endl;
	//ͨ��ѧ���࣬����һ��ѧ��
	Student student;
	//student.stu[2]= { {"lisa","USA"},{"anna","CHINA"} };
	//student.stu[0].id = "USA";
	//student.stu[0].name = "lisa";
	//student.stu[1].id = "china";
	//student.stu[1].name = "linda";
	student.creatStu("����", "15",1);
	student.displayStu(1);
	student.creatStu("����", "16", 1);
	student.displayStu(1);
	return 0;
}