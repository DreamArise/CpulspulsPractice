#include<iostream>
using namespace std;

//1��ֵ����

void  my_Swap(int x, int y)
{
	
	int temp = x;
	x = y;
	y = temp;
}

//2����ַ����
void  my_Swap2(int *x, int *y)
{

	int temp = *x;
	*x = *y;
	*y = temp;
}

//3�����ô���
void  my_Swap3(int &x, int& y)
{

	int temp = x;
	x = y;
	y = temp;
}



int main5()
{
	int a = 20;
	int b = 23;
	//my_Swap(a, b);
	//my_Swap2(&a, &b);
	my_Swap3(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	return 0;
}