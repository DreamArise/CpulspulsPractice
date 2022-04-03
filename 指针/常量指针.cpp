#include<iostream>
using namespace std;

int main1()
{
	
	int a = 10;
	int b = 0;
	//1、const 修饰常量 指针常量
	int* const p = &a;
	*p = 50;//const修饰的指针指向的值可以更改
//	*p = &b;const修饰的指针不能更改
	//2、const 修饰指针 常量指针
	const int* p2 = &a;
	//*p2 = 50;指针指向的值不能更改
	p2 = &b;
	//3、const既修饰指针又修饰常量
	const int* const p3 = &a;
	//指针和指针指向的值都不能更改
	return 0;

}