#include"manager.h"



Manager::Manager(int id, string name, int dep)//����һ���ӿڣ����뾭�����Ϣ
{
	this->m_id = id;
	this->m_name = name;
	this->m_dep = dep;
}
 void Manager::ShowInf()//��ʾ���������Ϣ
{
	 cout << "����: " << this->m_name << "\tְ�����: " <<
		 this->m_id << "\tְ����λ: " << this->GetDepinf() <<
		 "\t��λְ������ϰ��·�������" << endl;
}
 string Manager::GetDepinf()//��ȡ��λ��Ϣ
{
	 return string("����");
}
