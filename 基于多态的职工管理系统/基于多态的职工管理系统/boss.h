#pragma once
#include"worker.h"
#include<iostream>
#include<string>
using namespace std;

class Boss :public Worker
{
public:
	Boss(int id, string name, int dep);//����һ���ӿڣ������ϰ����Ϣ
	virtual void ShowInf();//��ʾ������Ϣ
	virtual string GetDepinf();//��ȡ��λ��Ϣ
};


