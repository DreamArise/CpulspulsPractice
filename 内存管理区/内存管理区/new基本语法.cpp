#include<iostream>
using namespace std;

int* fun()
{
	//new在堆区开辟了一个四个字节的内存来存放10
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
