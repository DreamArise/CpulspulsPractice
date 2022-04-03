 #define  _CRT_SECURE_NO_WARNINGS -1
#include<iostream>
using namespace std;

int add(int x, int y)
{
	return x + y;
}

int main1()
{
	int a = 0;
	int b = 0;
	cin >> a >> b;
	int sum = add(a, b);
	cout << sum << endl;
	return 0;
}