#include<iostream>
using namespace std;

int* func()
{
	
	return new int(10);
}


int main2()
{
	//在堆区开辟数据
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}