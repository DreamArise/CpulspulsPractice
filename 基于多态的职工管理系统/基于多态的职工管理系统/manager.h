#pragma once
#include"worker.h"
#include<iostream>
#include<string>
using namespace std;

class Manager :public Worker
{
public:
	Manager(int id,string name,int dep);//创建一个接口，传入经理的信息
	virtual void ShowInf();//显示经理个人信息
	virtual string GetDepinf();//获取岗位信息
};

