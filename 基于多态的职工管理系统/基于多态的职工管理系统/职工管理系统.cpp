#include<iostream>
#include"workManage.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
using namespace std;


//void test()
//{
//	Worker* worker = new Employee(1,"����",1);
//	worker->ShowInf();
//	delete worker;
//	worker = NULL;
//	worker = new Manager(2, "����", 2);
//	worker->ShowInf();
//	delete worker;
//	worker = NULL;
//	worker = new Boss(3, "���ϰ�", 3);
//	worker->ShowInf();
//}

int main()
{

	WorkerManager wm;
	int choice;
	while (true)
	{
		wm.ShowMenu();
		//дһ��switch case
		cout << "���������ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://�˳�����
			wm.ExitSystem();
			break;
		case 1://���ְ��
			wm.AddEmp();
			break;
		case 2://��ʾְ��
			wm.showEmp();
			break;
		case 3://ɾ��ְ��
			wm.deleteEmp();
			break;
		case 4://�޸�ְ��
			wm.Mod_Emp();
			break;
		case 5://����ְ��
			wm.SechearEmp();
			break;
		case 6://����
			wm.SortEmp();
			break;
		case 7://���
			wm.clearEmp();
			break;
		default:
			break;
		}

	}

	system("pause");
	return 0;
}

