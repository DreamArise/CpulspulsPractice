#include<iostream>
#include"employee.h"

using namespace std;

Employee:: Employee(int id, string name, int dep)//���캯��
{
	this->m_id = id;
	this->m_name = name;
	this->m_dep = dep;
}

 void Employee::ShowInf()//��ʾְ��������Ϣ
{
	 cout << "����: " << this->m_name << "\tְ�����: " <<
		 this->m_id << "\tְ����λ: " << this->GetDepinf() <<
		 "\t��λְ����ɾ����·�������" << endl;
 }

 string Employee::GetDepinf()//��ȡְ����λ
{
	 return string("Ա��");
}


