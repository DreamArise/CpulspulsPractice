#include"manager.h"



Manager::Manager(int id, string name, int dep)//创建一个接口，传入经理的信息
{
	this->m_id = id;
	this->m_name = name;
	this->m_dep = dep;
}
 void Manager::ShowInf()//显示经理个人信息
{
	 cout << "姓名: " << this->m_name << "\t职工编号: " <<
		 this->m_id << "\t职工岗位: " << this->GetDepinf() <<
		 "\t岗位职责：完成老板下发的任务" << endl;
}
 string Manager::GetDepinf()//获取岗位信息
{
	 return string("经理");
}
