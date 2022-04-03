 #define  _CRT_SECURE_NO_WARNINGS -1
#include <iostream>

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}