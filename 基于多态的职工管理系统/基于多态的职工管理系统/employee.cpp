#include<iostream>
#include"employee.h"

using namespace std;

Employee:: Employee(int id, string name, int dep)//构造函数
{
	this->m_id = id;
	this->m_name = name;
	this->m_dep = dep;
}

 void Employee::ShowInf()//显示职工个人信息
{
	 cout << "姓名: " << this->m_name << "\t职工编号: " <<
		 this->m_id << "\t职工岗位: " << this->GetDepinf() <<
		 "\t岗位职责：完成经理下发的任务" << endl;
 }

 string Employee::GetDepinf()//获取职工岗位
{
	 return string("员工");
}


