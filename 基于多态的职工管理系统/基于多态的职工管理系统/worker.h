#pragma once
#include<iostream>
#include<string>
using namespace std;
 
//抽象一个职工类
class Worker
{
public:

	virtual void ShowInf() = 0;//显示职工个人信息
	virtual string GetDepinf() = 0;//获取职工岗位

	string m_name;//职工名称
	int m_id;//职工编号
	int m_dep;//职工部门
};