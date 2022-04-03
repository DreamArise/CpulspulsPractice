#include<iostream>
#include<string>
using namespace std;

struct Stu
{
	string name;
	int year;
	int score;
};


int main3()
{
	struct Stu stu[] =
	{
		{"zhangsan",15,80},
		{"lisi",52,68},
		{"wangwu",48,90}
	};
	Stu* ps = stu;
	for (int i = 0; i < 3; i++)
	{
		cout <<" ÐÕÃû£º" << ps->name <<" ÄêÁä: "<< ps->year <<" ³É¼¨£º" << ps->score << endl;
		ps++;
	}
	return 0;
}