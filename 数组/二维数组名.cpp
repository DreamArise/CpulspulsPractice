 #define  _CRT_SECURE_NO_WARNINGS -1
#include<iostream>
using namespace std;

int main4()
{
	int arr[2][3] = { 1,2,3,4,5,6 };
	cout <<"��ά����ռ�õ����ڴ�"<<sizeof(arr) << endl;
	cout << "��ά�����һ��ռ�õ��ڴ�" << sizeof(arr[0]) << endl;
	cout << "��ά�����һ��Ԫ��ռ�õ��ڴ�" << sizeof(arr[0][0]) << endl;
	cout << "first element" << *arr[0]<< endl;
	cout << "address of first row " << "\t" <<(int)&arr[0] << endl;
	cout << "address of second row " << (int)&arr[1] << endl;
	cout << "address of second row " << (int)(&arr[0]+1)<< endl;
	cout << "address of second row-first cow " << &arr[1]-&arr[0] << endl;
	cout << "address of entire arry " <<(int)arr << endl;
	cout << "the column of arr " << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "the row of arr " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
	return 0;
}