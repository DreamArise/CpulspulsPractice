 #define  _CRT_SECURE_NO_WARNINGS -1
#include<iostream>
using namespace std;

int main8()
{
	int i = 1;
	for (; i <= 100; i++)
	{
		//��λΪ7��ʮλΪ7����7�ı���
		if (i % 10 == 7 || i / 10 % 10 == 7 || i % 7 == 0)
		{
			cout << "������" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
	return 0;
}