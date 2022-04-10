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
	WorkerManager();//构造函数	

	void ShowMenu();//展示菜单

	void ExitSystem();//退出函数

	void AddEmp();//增加员工

	void Save();//保存员工

	bool m_FileIsEmpty;//文件是否为空标志

	int getEmpnum();//获取职工人数

	int isExist(int id);//判断职工是否存在

	void deleteEmp();//删除职工

	void Mod_Emp();//修改职工

	void SechearEmp();//查找职工

	void clearEmp();//清空职工
	 
	void SortEmp();//排序职工

	void inti();//初始化

	void showEmp();//显示职工

	~WorkerManager();//析构函数


	Worker** m_EmpArray;//存放指向员工指针的数组
	int m_Empnum;//添加的人数
};
