#include<iostream>
using namespace std;

int main4()
{
	int a = 20;
	//��һ������ȥ����a
	//�������� &���� ԭ��
	int &b = a;
	b = 100;
	cout << b << endl;
	cout << a << endl;
	return 0;
}