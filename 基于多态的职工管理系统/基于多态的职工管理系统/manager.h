#pragma once
#include"worker.h"
#include<iostream>
#include<string>
using namespace std;

class Manager :public Worker
{
public:
	Manager(int id,string name,int dep);//����һ���ӿڣ����뾭�����Ϣ
	virtual void ShowInf();//��ʾ���������Ϣ
	virtual string GetDepinf();//��ȡ��λ��Ϣ
};

