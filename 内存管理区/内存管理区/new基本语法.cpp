#include<iostream>
using namespace std;

int* fun()
{
	//new�ڶ���������һ���ĸ��ֽڵ��ڴ������10
	int *p=new int(10);
	return p;
}

void test01()
{
	int* p = fun();
	cout << *p << endl;
	cout << *p << endl;
	delete p;
	//cout << *p << endl;

}

void test02()
{
	int *arr=new int[10];
	for (int i = 0; i < 10; i++)
	{
		*(arr+i)= i;
		cout << *(arr+i) << endl;
	}
	delete[] arr;
	/*for (int i = 0; i < 10; i++)
	{
		*(arr + i) = i;
		cout << *(arr + i) << endl;
	}*/
}

int main3()
{
	//test01();
	test02();
	return 0;
}
