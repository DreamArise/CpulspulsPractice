#pragma once
#include<iostream>
#include<string>
using namespace std;
 
//����һ��ְ����
class Worker
{
public:

	virtual void ShowInf() = 0;//��ʾְ��������Ϣ
	virtual string GetDepinf() = 0;//��ȡְ����λ

	string m_name;//ְ������
	int m_id;//ְ�����
	int m_dep;//ְ������
};