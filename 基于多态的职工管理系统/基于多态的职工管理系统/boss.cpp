#include"boss.h"


Boss::Boss(int id, string name, int dep)//����һ���ӿڣ������ϰ����Ϣ
{
	this->m_id = id;
	this->m_name = name;
	this->m_dep = dep;
}
 void Boss::ShowInf()//��ʾ������Ϣ
{
	 cout << "����: " << this->m_name << "\tְ�����: " <<
		 this->m_id << "\tְ����λ: " << this->GetDepinf() <<
		 "\t��λְ�𣺹���˾���е�����" << endl;
}
 string Boss::GetDepinf()//��ȡ��λ��Ϣ
 {
	 return string("�ϰ�");
 }