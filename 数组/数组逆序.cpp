 #define  _CRT_SECURE_NO_WARNINGS -1
#include<iostream>
using namespace std;

int main1()
{
	//1、定义一个数组
	int arr[6] = { 1,7,9,4,10,6 };
	//2、将第一个和最后一个换
	int left = 0;
	int right = (sizeof(arr) / sizeof(arr[0]) )- 1;
	int temp = 0;
	while (left < right)
	{
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right;
	}
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << endl;
	}
	
	return 0;
}