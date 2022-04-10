#include"boss.h"


Boss::Boss(int id, string name, int dep)//创建一个接口，传入老板的信息
{
	this->m_id = id;
	this->m_name = name;
	this->m_dep = dep;
}
 void Boss::ShowInf()//显示个人信息
{
	 cout << "姓名: " << this->m_name << "\t职工编号: " <<
		 this->m_id << "\t职工岗位: " << this->GetDepinf() <<
		 "\t岗位职责：管理公司所有的事务" << endl;
}
 string Boss::GetDepinf()//获取岗位信息
 {
	 return string("老板");
 }