 #define  _CRT_SECURE_NO_WARNINGS -1
#include<iostream>
using namespace std;

int main2()
{
	int arr[] = { 1,2,6,4,5,3};
	//1、确定第一轮排序需要交换的次数为数组元素-1
	int count = sizeof(arr) / sizeof(arr[0]);
	//总共需要几轮
	int turn = 0;
	//3、总共需要元素个数-1轮排序
	for (int j = 0; j < count-1; j++)
	{	//设置一个交换的标志，如果某一轮发现标志没变，即交换结束，不用进行后续的交换
		int flag = 1;
		//2、进行一次排序，最大的元素冒泡到最后，就不用参与排序了
		for (int i = 0; i < count-j-1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
		turn++;
	}
	for (int k = 0; k <count; k++)
	{
		cout << arr[k] << endl;
	}
	cout << turn << endl;
	return 0;
}
