#include<iostream>
using namespace std;

int main9()
{
	//��ӡ1*1=1
	int sum = 0;
	
	//��ӡʮ��	
	for (int i = 1; i < 10; i++)
	{
		//��һ�д�ӡһ�����ڶ��д�ӡ���
		for (int j = 1; j < i + 1; j++)
		{
			cout << j << "*" << i << "=" << i * j<<"\t";
		}
		cout << endl;
	}
	return 0;
}