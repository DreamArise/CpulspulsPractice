#include<iostream>
using namespace std;

int* func()
{
	
	return new int(10);
}


int main2()
{
	//�ڶ�����������
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}