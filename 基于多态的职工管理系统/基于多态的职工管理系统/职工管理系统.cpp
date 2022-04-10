#include<iostream>
#include"workManage.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
using namespace std;


//void test()
//{
//	Worker* worker = new Employee(1,"张三",1);
//	worker->ShowInf();
//	delete worker;
//	worker = NULL;
//	worker = new Manager(2, "李总", 2);
//	worker->ShowInf();
//	delete worker;
//	worker = NULL;
//	worker = new Boss(3, "李老板", 3);
//	worker->ShowInf();
//}

int main()
{

	WorkerManager wm;
	int choice;
	while (true)
	{
		wm.ShowMenu();
		//写一个switch case
		cout << "请输入你的选择：" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://退出程序
			wm.ExitSystem();
			break;
		case 1://添加职工
			wm.AddEmp();
			break;
		case 2://显示职工
			wm.showEmp();
			break;
		case 3://删除职工
			wm.deleteEmp();
			break;
		case 4://修改职工
			wm.Mod_Emp();
			break;
		case 5://查找职工
			wm.SechearEmp();
			break;
		case 6://排序
			wm.SortEmp();
			break;
		case 7://清空
			wm.clearEmp();
			break;
		default:
			break;
		}

	}

	system("pause");
	return 0;
}

