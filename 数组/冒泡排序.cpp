 #define  _CRT_SECURE_NO_WARNINGS -1
#include<iostream>
using namespace std;

int main2()
{
	int arr[] = { 1,2,6,4,5,3};
	//1��ȷ����һ��������Ҫ�����Ĵ���Ϊ����Ԫ��-1
	int count = sizeof(arr) / sizeof(arr[0]);
	//�ܹ���Ҫ����
	int turn = 0;
	//3���ܹ���ҪԪ�ظ���-1������
	for (int j = 0; j < count-1; j++)
	{	//����һ�������ı�־�����ĳһ�ַ��ֱ�־û�䣬���������������ý��к����Ľ���
		int flag = 1;
		//2������һ����������Ԫ��ð�ݵ���󣬾Ͳ��ò���������
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
