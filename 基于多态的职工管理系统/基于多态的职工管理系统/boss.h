#pragma once
#include"worker.h"
#include<iostream>
#include<string>
using namespace std;

class Boss :public Worker
{
public:
	Boss(int id, string name, int dep);//创建一个接口，传入老板的信息
	virtual void ShowInf();//显示个人信息
	virtual string GetDepinf();//获取岗位信息
};


