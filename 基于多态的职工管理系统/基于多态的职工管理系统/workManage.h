#pragma once
#include<iostream>
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
#include<fstream>
#define FILENAME "employ.txt"
using namespace std;

class WorkerManager
{
public:
	WorkerManager();//���캯��	

	void ShowMenu();//չʾ�˵�

	void ExitSystem();//�˳�����

	void AddEmp();//����Ա��

	void Save();//����Ա��

	bool m_FileIsEmpty;//�ļ��Ƿ�Ϊ�ձ�־

	int getEmpnum();//��ȡְ������

	int isExist(int id);//�ж�ְ���Ƿ����

	void deleteEmp();//ɾ��ְ��

	void Mod_Emp();//�޸�ְ��

	void SechearEmp();//����ְ��

	void clearEmp();//���ְ��
	 
	void SortEmp();//����ְ��

	void inti();//��ʼ��

	void showEmp();//��ʾְ��

	~WorkerManager();//��������


	Worker** m_EmpArray;//���ָ��Ա��ָ�������
	int m_Empnum;//��ӵ�����
};
