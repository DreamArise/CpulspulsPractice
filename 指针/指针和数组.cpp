#include<iostream>
using namespace std;

int main2()
{
	int arr1[] = { 1,2,3,4,5 };
	int* p = arr1;
	for (int i = 0; i < 5; i++)
	{
		cout << *p + i << endl;
	}
	return 0;
}