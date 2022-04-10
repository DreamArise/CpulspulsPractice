#pragma once
#include<iostream>
#include"worker.h"
#include<string>
using namespace std;

class Employee:public Worker
{
public:
	Employee(int id, string name, int dep);//构造函数
	virtual void ShowInf();//显示职工个人信息
	virtual string GetDepinf();//获取职工岗位

};