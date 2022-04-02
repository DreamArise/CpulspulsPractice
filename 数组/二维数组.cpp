 #define  _CRT_SECURE_NO_WARNINGS -1
#include<iostream>
using namespace std;

int main3()
{
	//定义一个二维数组
	int arr[2][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			//arr[i][j] = i + j;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}