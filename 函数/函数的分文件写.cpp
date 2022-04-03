#include<iostream>
#include"swap.h"
using namespace std;

int main()
{
	int a = 10;
	int b = 5;
	swap(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	return 0;
}
