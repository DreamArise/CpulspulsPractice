#include<iostream>
using namespace std;

//ȫ�ֱ���
int g_a = 3;
int g_b = 5;

//const�����ε�ȫ�ֱ���  ȫ�ֳ���

const int c_g_a = 10;

int main1()
{
	//��ͨ�ֲ�����
	int a = 10;
	int b = 20;
	cout << "�ֲ�����a�ĵ�ַ" << (int)&a << endl;
	cout << "�ֲ�����b�ĵ�ַ" << (int)&b << endl;

	cout << "ȫ�ֱ���g_a�ĵ�ַ" << (int)&g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַ" << (int)&g_b << endl;

	//��̬����
	static int s_a = 10;
	static int s_b = 18;
	cout << "��̬����s_a�ĵ�ַ" << (int)&s_a << endl;
	cout << "��̬����s_b�ĵ�ַ" << (int)&s_b << endl;

	//�ַ�������
	cout << "�ַ��������ĵ�ַ" << (int)&"hello world" << endl;
	cout << "�ַ��������ĵ�ַ" << (int)&"b" << endl;

	//const ���ε�ȫ�ֱ��� ��const ���ξֲ�����
	//const ���εľֲ����� �ֲ�����
	const int c_a = 10;
	cout << "ȫ�ֳ����ĵ�ַ" << (int)&c_g_a << endl;
	cout << "�ֲ������ĵ�ַ" << (int)&c_a << endl;

	system("pause");
	return 0;
}