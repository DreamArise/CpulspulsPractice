#pragma once
#include<iostream>
#include"worker.h"
#include<string>
using namespace std;

class Employee:public Worker
{
public:
	Employee(int id, string name, int dep);//���캯��
	virtual void ShowInf();//��ʾְ��������Ϣ
	virtual string GetDepinf();//��ȡְ����λ

};