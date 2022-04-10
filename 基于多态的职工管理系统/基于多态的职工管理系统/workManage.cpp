#include"workManage.h"

WorkerManager::WorkerManager( )//构造函数初始化
{
	//文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;

		this->m_EmpArray = NULL;
		this->m_Empnum = 0;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	//当文件存在，但为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "文件存在,但为空" << endl;

		this->m_EmpArray = NULL;
		this->m_Empnum = 0;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//当文件存在，不为空
	int num = this->getEmpnum();
	cout << "员工的人数为：" << num << endl;
	this->m_Empnum = num;
	this->m_EmpArray = new Worker*[m_Empnum];
	this->inti();
}

void WorkerManager::inti()//初始化
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dId)
	{
		Worker* worker = NULL;

		if (dId == 1) //普通职工
		{
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2) //经理
		{
			worker = new Manager(id, name, dId);
		}
		else  //老板
		{
			worker = new Boss(id, name, dId);
		}
		this->m_EmpArray[index] = worker;
		index++;
	}
	ifs.close();
}

int WorkerManager::getEmpnum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int num = 0;
	string buf;
	while (getline(ifs,buf))
	{
		num++;
	}
	ifs.close();
	return num;
}

void WorkerManager::showEmp()
{
	if (!this->m_FileIsEmpty)
	{
		for (int i = 0; i < this->m_Empnum; i++)
		{
			this->m_EmpArray[i]->ShowInf();
		}
	}
	else
	{
		cout<<"文件记录为空或不存在" << endl;
	}
	system("pause");
	system("cls");
}

void WorkerManager:: AddEmp()//增加员工
{
	cout << "请输入添加职工数量： " << endl;

	int addNum = 0; //保存用户的输入数量
	cin >> addNum;

	if (addNum > 0)
	{
		//添加
		//计算添加新空间大小
		int newSize = this->m_Empnum + addNum; // 新空间人数 = 原来记录人数 + 新增人数

		//开辟新空间
		Worker** newSpace = new Worker * [newSize+4];

		//将原来空间下数据，拷贝到新空间下
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_Empnum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//批量添加新数据
		for (int i = 0; i < addNum; i++)
		{
			int id; //职工编号
			string name; //职工姓名
			int dSelect; // 部门选择

			cout << "请输入第 " << i + 1 << " 个新职工编号： " << endl;
			cin >> id;

			cout << "请输入第 " << i + 1 << " 个新职工姓名： " << endl;
			cin >> name;

			cout << "请选择该职工岗位： " << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}
			//将创建职工职责 ，保存到数组中，就是数组的扩充
			newSpace[this->m_Empnum + i] = worker;

		}

		//释放原有空间
		delete[] this->m_EmpArray;

		//更改新空间的指向
		this->m_EmpArray = newSpace;

		//更新新的职工人数
		this->m_Empnum = newSize;

		//更新职工不为空标志
		this->m_FileIsEmpty = false;

		//提示添加成功
		cout << "成功添加" << addNum << "名新职工!" << endl;

		//保存数据到文件中

		this->Save();

	}
	else
	{
		cout << "输入数据有误" << endl;
	}

	//按任意键后 清屏回到上级目录
	system("pause");
	system("cls");
}

int WorkerManager::isExist(int id)//判断员工是否存在
{
	int idex = -1;
	for (int i = 0; i < this->m_Empnum; i++)
	{
		if (this->m_EmpArray[i]->m_id == id)
		{
			idex = i;
			break;
		}
	}
	return idex;
}

void WorkerManager::deleteEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件记录为空" << endl;
	}
	else
	{
		cout << "请输入你要删除的职工id" << endl;
		int id;
		cin >> id;
		int ret = this->isExist(id);
		//判断职工是否存在
		if (ret!=-1)
		{
			for (int ret = 0; ret < this->m_Empnum; ret++)
			{
				this->m_EmpArray[ret] = this->m_EmpArray[ret + 1];
			}
			this->m_Empnum--;
			this->Save();
			cout << "删除成功" << endl;
		}
		else
		{
			cout << "查无此人" << endl;
		}
	}
	system("pause");
	system("cls");
}

//修改职工
void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		if (this->m_EmpArray == NULL)
		{
			cout << "纪录为空" << endl;
		}
		else
		{
			cout << "请输入修改职工的编号：" << endl;
			int id;
			cin >> id;

			int ret = this->isExist(id);
			if (ret != -1)
			{
				//查找到编号的职工

				delete this->m_EmpArray[ret];

				int newId = 0;
				string newName = "";
				int dSelect = 0;

				cout << "查到： " << id << "号职工，请输入新职工号： " << endl;
				cin >> newId;

				cout << "请输入新姓名： " << endl;
				cin >> newName;

				cout << "请输入岗位： " << endl;
				cout << "1、普通职工" << endl;
				cout << "2、经理" << endl;
				cout << "3、老板" << endl;
				cin >> dSelect;

				Worker* worker = NULL;
				switch (dSelect)
				{
				case 1:
					worker = new Employee(newId, newName, dSelect);
					break;
				case 2:
					worker = new Manager(newId, newName, dSelect);
					break;
				case 3:
					worker = new Boss(newId, newName, dSelect);
					break;
				default:
					break;
				}

				//更改数据 到数组中
				if (worker != NULL)
				{
					this->m_EmpArray[ret] = worker;

					cout << "修改成功！" << this->m_EmpArray[ret]->m_dep << endl;
				}
				//保存到文件中
				this->Save();
			}
			else
			{
				cout << "修改失败，查无此人" << endl;
			}
		}
		
	}

	//按任意键 清屏
	system("pause");
	system("cls");
}

//查找职工
void WorkerManager::SechearEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件记录为空或文件不存在" << endl;
	}
	else
	{
		cout << "请输入查找的方式：" << endl;
		cout << "1、按职工编号查找 " << endl;
		cout << "2、按职工姓名查找 " << endl;
		int Select = 0;
		cin >> Select;
		if (Select == 1)
		{
			cout << "请输入职工编号：" << endl;
			int id;
			cin >> id;
			int ret = this->isExist(id);
			if (ret != -1)
			{
				this->m_EmpArray[ret]->ShowInf();
			}
			else
			{
				cout << "查无此人" << endl;
			}
		}
		else if (Select == 2)
		{
			cout << "请输入职工的姓名：" << endl;
			string name;
			cin >> name;
			bool flag = false;
			for (int i = 0; i < this->m_Empnum; i++)
			{
				if (this->m_EmpArray[i]->m_name == name)
				{
					cout << "查到了" << endl;
					this->m_EmpArray[i]->ShowInf();
					flag = true;
				
				}
			}
			if (flag == false)
			{
				cout << "查无此人" << endl;
			}
		}
		else
		{
			cout << "输入有误" << endl;
		}
	}
	//按任意键 清屏
	system("pause");
	system("cls");
}

//排序职工
void WorkerManager::SortEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或者记录为空" << endl;
	}
	else
	{
		cout << "请选择排序方式：" << endl;
		cout << "1、按职工号进行升序" << endl;
		cout << "2、按职工号进行降序" << endl;

		int select = 0;
		cin >> select;
		for (int i = 0; i < this->m_Empnum; i++)
		{
			int maxorMin = i;
			for (int j = i + 1; j < this->m_Empnum; j++)
			{
				//升序
				if (select == 1)
				{
					if (this->m_EmpArray[maxorMin]->m_id > this->m_EmpArray[j]->m_id)
					{
						maxorMin = j;
					}
				}
				else//降序
				{	
					if (this->m_EmpArray[maxorMin]->m_id < this->m_EmpArray[j]->m_id)
					{
						maxorMin = j;
					}
				}
			}
			//判断一开始认定 最小值或最大值 是不是 计算的最小值或最大值，如果不是 交换数据
			if (i != maxorMin)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[maxorMin];
				this->m_EmpArray[maxorMin] = temp;
			}			
		}

		cout << "排序成功！排序后的结果为： " << endl;
		this->Save();//保存结果
		this->showEmp();//显示结果
	}
}

//清空记录
void WorkerManager::clearEmp()
{
	cout << "确定清空？" << endl;
	cout << "1、确定" << endl;
	cout << "2、返回" << endl;
	int Select = 0;
	cin >> Select;
	if (Select == 1)
	{
		ofstream ofs;
		ofs.open(FILENAME, ios::trunc);
		ofs.close();
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_Empnum; i++)
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_Empnum = 0;
			this->m_FileIsEmpty = true;
		}
		cout << "清空成功" << endl;
	}
	//按任意键 清屏
	system("pause");
	system("cls");
}
//保存到文件中
void WorkerManager::Save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	for (int i = 0; i < this->m_Empnum; i++)
	{
		ofs << this->m_EmpArray[i]->m_id << " "
			<< this->m_EmpArray[i]->m_name << " "
			<< this->m_EmpArray[i]->m_dep << endl;
	}
	ofs.close();
}

void WorkerManager::ShowMenu()
{
	cout << "***************************************" << endl;
	cout << "*********欢迎使用职工管理系统!*********" << endl;
	cout << "********** 1.增加职工信息 *************" << endl;
	cout << "********** 2.显示职工信息 *************" << endl;
	cout << "********** 3.删除离职职工 *************" << endl;
	cout << "********** 4.修改职工信息 *************" << endl;
	cout << "********** 5.查找职工信息 *************" << endl;
	cout << "********** 6.按照编号排序 *************" << endl;
	cout << "********** 7.清空所有文档 *************" << endl;
	cout << "********** 0.退出管理程序 *************" << endl;
}

void WorkerManager::ExitSystem()
{
	cout << "欢迎再次使用" << endl;
	system("pause");
	exit(0);
}

WorkerManager::~WorkerManager()//析构函数
{

}