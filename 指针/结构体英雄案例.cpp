#include<iostream>
using namespace std;
#include<string>


//1������һ��Ӣ�۵Ľṹ��
//2������һ���ṹ������
//3��ð�ݷ�
//4����ӡ

struct Hero
{
	string name;
	int age;
	string gender;
};
void my_bubble(struct Hero heroArry[],int len)
{
	for (int i = 0; i < len-1; i++)
	{
		int flag = 1;
		for (int j = 0; j < len - i - 1;j++)
		{
			if (heroArry[j].age > heroArry[j + 1].age)
			{
				int temp = heroArry[j].age;
				heroArry[j].age = heroArry[j + 1].age;
				heroArry[j + 1].age = temp;
				flag = 0;
			}
			if (flag == 1)
			{
				break;
			}
		}
	}
}
void myprintf(struct Hero *p, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "Ӣ�����֣�" << p->name << "\tӢ������:" << p->age << "\tӢ���Ա�" << p->gender << endl;
		p++;
	}
}
int main()
{
	struct Hero heroArry[5] = {
		{"zhangfei",23,"male"},
		{"guanyu",30,"male"},
		{"hanxin",28,"male"},
		{"diaozhan",19,"famale"},
		{"zhaoyun",20,"male"}
	};
	int len = 5;
	my_bubble(heroArry,len);
	myprintf(heroArry, len);
	return 0;
}