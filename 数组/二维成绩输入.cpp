 #define  _CRT_SECURE_NO_WARNINGS -1
#include<iostream>
using namespace std;

int main()
{	//定义三个人成绩
	int arr[3][3] = { {80,85,90},{75,89,100},{88,94,81} };
	//output the students scords
	//difine the name of three students
	string name[] = { "张三","李四","王五" };
	string course[] = { "chinese","math","english" };
	for (int i = 0; i < 3; i++)
	{
		cout << name[i] << "\t";
		for (int j = 0; j < 3; j++)
		{
			cout << course[j] << "\t";
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

}