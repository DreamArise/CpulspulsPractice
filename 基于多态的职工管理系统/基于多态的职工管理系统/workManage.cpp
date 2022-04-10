#include"workManage.h"

WorkerManager::WorkerManager( )//���캯����ʼ��
{
	//�ļ�������
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;

		this->m_EmpArray = NULL;
		this->m_Empnum = 0;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}

	//���ļ����ڣ���Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "�ļ�����,��Ϊ��" << endl;

		this->m_EmpArray = NULL;
		this->m_Empnum = 0;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//���ļ����ڣ���Ϊ��
	int num = this->getEmpnum();
	cout << "Ա��������Ϊ��" << num << endl;
	this->m_Empnum = num;
	this->m_EmpArray = new Worker*[m_Empnum];
	this->inti();
}

void WorkerManager::inti()//��ʼ��
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

		if (dId == 1) //��ְͨ��
		{
			worker = new Employee(id, name, dId);
		}
		else if (dId == 2) //����
		{
			worker = new Manager(id, name, dId);
		}
		else  //�ϰ�
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
		cout<<"�ļ���¼Ϊ�ջ򲻴���" << endl;
	}
	system("pause");
	system("cls");
}

void WorkerManager:: AddEmp()//����Ա��
{
	cout << "���������ְ�������� " << endl;

	int addNum = 0; //�����û�����������
	cin >> addNum;

	if (addNum > 0)
	{
		//���
		//��������¿ռ��С
		int newSize = this->m_Empnum + addNum; // �¿ռ����� = ԭ����¼���� + ��������

		//�����¿ռ�
		Worker** newSpace = new Worker * [newSize+4];

		//��ԭ���ռ������ݣ��������¿ռ���
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_Empnum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//�������������
		for (int i = 0; i < addNum; i++)
		{
			int id; //ְ�����
			string name; //ְ������
			int dSelect; // ����ѡ��

			cout << "������� " << i + 1 << " ����ְ����ţ� " << endl;
			cin >> id;

			cout << "������� " << i + 1 << " ����ְ�������� " << endl;
			cin >> name;

			cout << "��ѡ���ְ����λ�� " << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
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
			//������ְ��ְ�� �����浽�����У��������������
			newSpace[this->m_Empnum + i] = worker;

		}

		//�ͷ�ԭ�пռ�
		delete[] this->m_EmpArray;

		//�����¿ռ��ָ��
		this->m_EmpArray = newSpace;

		//�����µ�ְ������
		this->m_Empnum = newSize;

		//����ְ����Ϊ�ձ�־
		this->m_FileIsEmpty = false;

		//��ʾ��ӳɹ�
		cout << "�ɹ����" << addNum << "����ְ��!" << endl;

		//�������ݵ��ļ���

		this->Save();

	}
	else
	{
		cout << "������������" << endl;
	}

	//��������� �����ص��ϼ�Ŀ¼
	system("pause");
	system("cls");
}

int WorkerManager::isExist(int id)//�ж�Ա���Ƿ����
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
		cout << "�ļ���¼Ϊ��" << endl;
	}
	else
	{
		cout << "��������Ҫɾ����ְ��id" << endl;
		int id;
		cin >> id;
		int ret = this->isExist(id);
		//�ж�ְ���Ƿ����
		if (ret!=-1)
		{
			for (int ret = 0; ret < this->m_Empnum; ret++)
			{
				this->m_EmpArray[ret] = this->m_EmpArray[ret + 1];
			}
			this->m_Empnum--;
			this->Save();
			cout << "ɾ���ɹ�" << endl;
		}
		else
		{
			cout << "���޴���" << endl;
		}
	}
	system("pause");
	system("cls");
}

//�޸�ְ��
void WorkerManager::Mod_Emp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		if (this->m_EmpArray == NULL)
		{
			cout << "��¼Ϊ��" << endl;
		}
		else
		{
			cout << "�������޸�ְ���ı�ţ�" << endl;
			int id;
			cin >> id;

			int ret = this->isExist(id);
			if (ret != -1)
			{
				//���ҵ���ŵ�ְ��

				delete this->m_EmpArray[ret];

				int newId = 0;
				string newName = "";
				int dSelect = 0;

				cout << "�鵽�� " << id << "��ְ������������ְ���ţ� " << endl;
				cin >> newId;

				cout << "�������������� " << endl;
				cin >> newName;

				cout << "�������λ�� " << endl;
				cout << "1����ְͨ��" << endl;
				cout << "2������" << endl;
				cout << "3���ϰ�" << endl;
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

				//�������� ��������
				if (worker != NULL)
				{
					this->m_EmpArray[ret] = worker;

					cout << "�޸ĳɹ���" << this->m_EmpArray[ret]->m_dep << endl;
				}
				//���浽�ļ���
				this->Save();
			}
			else
			{
				cout << "�޸�ʧ�ܣ����޴���" << endl;
			}
		}
		
	}

	//������� ����
	system("pause");
	system("cls");
}

//����ְ��
void WorkerManager::SechearEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ���¼Ϊ�ջ��ļ�������" << endl;
	}
	else
	{
		cout << "��������ҵķ�ʽ��" << endl;
		cout << "1����ְ����Ų��� " << endl;
		cout << "2����ְ���������� " << endl;
		int Select = 0;
		cin >> Select;
		if (Select == 1)
		{
			cout << "������ְ����ţ�" << endl;
			int id;
			cin >> id;
			int ret = this->isExist(id);
			if (ret != -1)
			{
				this->m_EmpArray[ret]->ShowInf();
			}
			else
			{
				cout << "���޴���" << endl;
			}
		}
		else if (Select == 2)
		{
			cout << "������ְ����������" << endl;
			string name;
			cin >> name;
			bool flag = false;
			for (int i = 0; i < this->m_Empnum; i++)
			{
				if (this->m_EmpArray[i]->m_name == name)
				{
					cout << "�鵽��" << endl;
					this->m_EmpArray[i]->ShowInf();
					flag = true;
				
				}
			}
			if (flag == false)
			{
				cout << "���޴���" << endl;
			}
		}
		else
		{
			cout << "��������" << endl;
		}
	}
	//������� ����
	system("pause");
	system("cls");
}

//����ְ��
void WorkerManager::SortEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��߼�¼Ϊ��" << endl;
	}
	else
	{
		cout << "��ѡ������ʽ��" << endl;
		cout << "1����ְ���Ž�������" << endl;
		cout << "2����ְ���Ž��н���" << endl;

		int select = 0;
		cin >> select;
		for (int i = 0; i < this->m_Empnum; i++)
		{
			int maxorMin = i;
			for (int j = i + 1; j < this->m_Empnum; j++)
			{
				//����
				if (select == 1)
				{
					if (this->m_EmpArray[maxorMin]->m_id > this->m_EmpArray[j]->m_id)
					{
						maxorMin = j;
					}
				}
				else//����
				{	
					if (this->m_EmpArray[maxorMin]->m_id < this->m_EmpArray[j]->m_id)
					{
						maxorMin = j;
					}
				}
			}
			//�ж�һ��ʼ�϶� ��Сֵ�����ֵ �ǲ��� �������Сֵ�����ֵ��������� ��������
			if (i != maxorMin)
			{
				Worker* temp = this->m_EmpArray[i];
				this->m_EmpArray[i] = this->m_EmpArray[maxorMin];
				this->m_EmpArray[maxorMin] = temp;
			}			
		}

		cout << "����ɹ��������Ľ��Ϊ�� " << endl;
		this->Save();//������
		this->showEmp();//��ʾ���
	}
}

//��ռ�¼
void WorkerManager::clearEmp()
{
	cout << "ȷ����գ�" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2������" << endl;
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
		cout << "��ճɹ�" << endl;
	}
	//������� ����
	system("pause");
	system("cls");
}
//���浽�ļ���
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
	cout << "*********��ӭʹ��ְ������ϵͳ!*********" << endl;
	cout << "********** 1.����ְ����Ϣ *************" << endl;
	cout << "********** 2.��ʾְ����Ϣ *************" << endl;
	cout << "********** 3.ɾ����ְְ�� *************" << endl;
	cout << "********** 4.�޸�ְ����Ϣ *************" << endl;
	cout << "********** 5.����ְ����Ϣ *************" << endl;
	cout << "********** 6.���ձ������ *************" << endl;
	cout << "********** 7.��������ĵ� *************" << endl;
	cout << "********** 0.�˳�������� *************" << endl;
}

void WorkerManager::ExitSystem()
{
	cout << "��ӭ�ٴ�ʹ��" << endl;
	system("pause");
	exit(0);
}

WorkerManager::~WorkerManager()//��������
{

}