#include<iostream>
using namespace std;

int main1()
{
	
	int a = 10;
	int b = 0;
	//1��const ���γ��� ָ�볣��
	int* const p = &a;
	*p = 50;//const���ε�ָ��ָ���ֵ���Ը���
//	*p = &b;const���ε�ָ�벻�ܸ���
	//2��const ����ָ�� ����ָ��
	const int* p2 = &a;
	//*p2 = 50;ָ��ָ���ֵ���ܸ���
	p2 = &b;
	//3��const������ָ�������γ���
	const int* const p3 = &a;
	//ָ���ָ��ָ���ֵ�����ܸ���
	return 0;

}