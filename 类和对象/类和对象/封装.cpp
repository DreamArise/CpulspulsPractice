#include<iostream>
using namespace std;
#include <string>

//设计一个圆类，求圆的周长
//类包含：属性、行为
const double PI = 3.14;
class Circle
{
	//代表访问权限
	//为公共权限
public:
	//属性，圆的半径
	int m_r;
	//行为，求圆的周长，一般是一个函数
	double clc()
	{
		return 2 * PI * m_r;
	}
};

//设计一个学生类，属性有姓名，学号，可以赋值，可以展示

class Student
{
public:
	//属性学生的姓名、学号
	struct Stu
	{
		string id;
		string name;
	};
	Stu stu[2];
	////行为 给学生进行赋值、展示
	void creatStu(string id,string name,int number)
	{
		for (int i = 0; i < number; i++)
		{
			stu[i].name = name;
			stu[i].id = id;
		}
	}
	//行为 显示这些学生
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
	////通过圆类，创建一个圆的对象c1
	//Circle c1;
	////给对象属性进行赋值
	//c1.m_r = 10;
	//cout << "圆的周长是" << c1.clc() << endl;
	//通过学生类，创建一个学生
	Student student;
	//student.stu[2]= { {"lisa","USA"},{"anna","CHINA"} };
	//student.stu[0].id = "USA";
	//student.stu[0].name = "lisa";
	//student.stu[1].id = "china";
	//student.stu[1].name = "linda";
	student.creatStu("张三", "15",1);
	student.displayStu(1);
	student.creatStu("李四", "16", 1);
	student.displayStu(1);
	return 0;
}