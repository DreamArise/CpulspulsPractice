 #define  _CRT_SECURE_NO_WARNINGS -1
#include<iostream>
#include<ctime>
using namespace std;

int main5()
{
	//1������һ�������
	/*srand((unsigned int)time(NULL));*/
	srand((unsigned int)time(NULL));
	int number = rand() % 100+1;
	int count = 5;
	/*2��������µ�����*/
	cout << "you have " << count << " chances totally " << endl;
	cout << "please input a number you gusse:" << endl;
	while (1)
	{
		int a = 0;
		cin >> a;
		//3���ж���µ���
		if (a > number)
		{
			cout << "bigger" << endl;
		}
		else if(a<number)
		{
			cout << "smaller" << endl;
		}
		else
		{
			cout << "you are right" << endl;
			break;
		}
		count--;//��������1
		if (count == 0)
		{
			cout << "your chance is over" << endl;
			break;
		}
		cout << "try again" << endl;
		cout << "you have " << count << " chances else " << endl;
	}
	system("pause");
	return 0;
}