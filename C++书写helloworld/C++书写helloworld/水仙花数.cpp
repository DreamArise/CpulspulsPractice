 #define  _CRT_SECURE_NO_WARNINGS -1
#include<iostream>
using namespace std;
int main7()
{
	int a = 0;//�洢��λ
	int b = 0;//���ʮλ
	int c = 0;//��Ű�λ
	int i = 100;
	for (; i < 1000; i++)
	{
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100;
		//cout << i<<endl;
		if (a * a * a + b * b * b + c * c * c == i)
		{
			cout << i << endl;
		}
	}
	system("pause");
	return 0;
}