#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
#define MAX 100
//�˵�����
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****" << "  1�������ϵ��  " << "*****" << endl;
	cout << "*****" << "  2����ʾ��ϵ��  " << "*****" << endl;
	cout << "*****" << "  3��ɾ����ϵ��  " << "*****" << endl;
	cout << "*****" << "  4��������ϵ��  " << "*****" << endl;
	cout << "*****" << "  5���޸���ϵ��  " << "*****" << endl;
	cout << "*****" << "  6�������ϵ��  " << "*****" << endl;
	cout << "*****" << "  0���˳�ͨѶ¼  " << "*****" << endl;
	cout << "***************************" << endl;
}
//����һ����ϵ�˵Ľṹ��
struct Person
{
	//��ϵ������
	string p_name;
	//��ϵ���Ա�
	int p_gender=0;
	//����
	int p_age=0;
	//�绰
	string p_phone;
	//סַ
	string p_addr;
};

struct Managesys
{
	//��ϵ������
	struct Person personArray[MAX];
	//��ϵ������¼
	int m_size=0;
};

void addPerson(struct Managesys *abs)
{
	cout << "��������ϵ��������" << endl;
	string name;
	cin >> name;
	abs->personArray[abs->m_size].p_name = name;
	cout << "�������Ա�:" << endl;
	cout << "1:�У�2��Ů" << endl;
	int sex;
	while (true)
	{
		cin >> sex;
		if (sex == 1 || sex == 2)
		{
			abs->personArray[abs->m_size].p_gender = sex;
			break;
		}
		else
		{
			cout << "�����������������" << endl;
		}
	}
	cout << "����������:" << endl;
	int age = 0;
	while (true)
	{
		cin >> age;
		if (age<=0||age>100)
		{
			cout << "�����������������" << endl;
		}
		else
		{
			abs->personArray[abs->m_size].p_age = age;
			break;
		}
	}
	cout << "��������ϵ�˵绰��" << endl;
	string num;
	cin >> num;
	abs->personArray[abs->m_size].p_phone = num;
	cout << "��������ϵ�˵�ַ��" << endl;
	string address;
	cin >> address;
	abs->personArray[abs->m_size].p_addr = address;
	abs->m_size++;
	cout << "��ӳɹ�" << endl;
	system("pause");
	system("cls");
}
void disPlay(struct Managesys* abs)
{
	if (abs->m_size == 0)
	{
		cout << "�޼�¼" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "������" << abs->personArray[i].p_name 
				<< "\t�Ա�" << (abs->personArray[i].p_gender==1?"��":"Ů")
				<<"\t���䣺" << abs->personArray[i].p_age 
				<< "\t�绰��" << abs->personArray[i].p_phone 
				<<"\t��ַ��" << abs->personArray[i].p_addr << endl;
		}
	}
	system("pause");
	system("cls");
}

int isExist(Managesys *abs,string d_name)
{
	for (int i =0;i<abs->m_size;i++)
	{
		//����ͨѶ¼�������ҳ���֮��ȵ�
		if (abs->personArray[i].p_name==d_name)
		{
			return i;
		} 
	}
	return -1;
}

void deletePerson(Managesys* abs)
{
	cout << "������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;
	int ret =isExist(abs, name);
	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		for (int i = ret; i < abs->m_size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		cout << "ɾ���ɹ�" << endl;
		abs->m_size--;
	}
	system("pause");
	system("cls");
}

void checkPerson(Managesys* abs)
{
	cout << "������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		cout << "������" << abs->personArray[ret].p_name
			<< "\t�Ա�" << (abs->personArray[ret].p_gender == 1 ? "��" : "Ů")
			<< "\t���䣺" << abs->personArray[ret].p_age
			<< "\t�绰��" << abs->personArray[ret].p_phone
			<< "\t��ַ��" << abs->personArray[ret].p_addr << endl;
	}
	system("pause");
	system("cls");
}

void modifyPerson(Managesys* abs)
{
	cout << "������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		place:cout << "����������Ҫ�޸ĵ���Ŀ" << endl;
		cout << "1������" << "\t" << "2���Ա�" << "\t" << "3������" << endl;
		cout << "4���绰" << "\t" << "5����ͥסַ" << endl;
		int num;
		cin >> num;
		switch (num)
		{
		case 1://�޸�����
		{
			cout << "�������޸ĵ�����" << endl;
			string c_name;
			cin >> c_name;
			abs->personArray[ret].p_name = c_name;
			cout << "�޸���ϣ��Ƿ�Ҫ�޸ĸ���ϵ�˵������" << endl;
			cout << "1����	2����" << endl;
			int flag;
			cin >> flag;
			if (flag == 1)
			{
				goto place;
			}
			else
			{
				break;
			}
		}
			break;
		case 2://�޸��Ա�
		{
			cout << "��ѡ���޸ĵ��Ա�" <<"\t";
			cout << "1���� 2��Ů" << endl;
			int c_sex;
			cin >> c_sex;
			abs->personArray[ret].p_gender = c_sex;
			cout << "�޸���ϣ��Ƿ�Ҫ�޸ĸ���ϵ�˵������" << endl;
			cout << "1����	2����" << endl;
			int flag;
			cin >> flag;
			if (flag == 1)
			{
				goto place;
			}
			else
			{
				break;
			}
		}
			break;
		case 3://�޸�����
		{
			cout << "�������޸ĵ�����" << endl;
			int c_age;
			cin >> c_age;
			abs->personArray[ret].p_age = c_age;
			cout << "�޸���ϣ��Ƿ�Ҫ�޸ĸ���ϵ�˵������" << endl;
			cout << "1����	2����" << endl;
			int flag;
			cin >> flag;
			if (flag == 1)
			{
				goto place;
			}
			else
			{
				break;
			}
		}
			break;
		case 4://�޸ĵ绰
		{
			cout << "�������޸ĵĵ绰" << endl;
			string c_phone;
			cin >> c_phone;
			abs->personArray[ret].p_phone = c_phone;
			cout << "�޸���ϣ��Ƿ�Ҫ�޸ĸ���ϵ�˵������" << endl;
			cout << "1����	2����" << endl;
			int flag;
			cin >> flag;
			if (flag == 1)
			{
				goto place;
			}
			else
			{
				break;
			}
		}
			break;
		case 5://�޸ĵ�ַ
		{
			cout << "�������޸ĵĵ�ַ" << endl;
			string c_address;
			cin >> c_address;
			abs->personArray[ret].p_addr = c_address;
			cout << "�޸���ϣ��Ƿ�Ҫ�޸ĸ���ϵ�˵������" << endl;
			cout << "1����	2����" << endl;
			int flag;
			cin >> flag;
			if (flag == 1)
			{
				goto place;
			}
			else
			{
				break;
			}
		}
			break;
		default:
			break;
		}
	}
	system("pause");
	system("cls");
}

void clearPerson(Managesys *abs)
{
	abs->m_size = 0;
	cout << "�������ϵ��" << endl;
	system("pause");
	system("cls");
}
int main()
{
	int select = 0;
	//����һ��ͨѶ¼�Ľṹ�����
	Managesys abs;
	//��ʼ����ϵ������¼
	abs.m_size = 0;
	while (true)
	{
		showMenu();
		again:cin >> select;
		if (select > 6 || select < 0)
		{
			cout << "�����������������" << endl;
			goto again;
		}
		switch (select)
		{
		case 1://���һ����ϵ��
			addPerson(&abs);
			break;
		case 2://��ʾȫ����ϵ��
			disPlay(&abs);
			break;
		case 3://ɾ����ϵ��
			deletePerson(&abs);
			break;
		case 4://������ϵ��
			checkPerson(&abs);
			break;
		case 5://�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6://�����ϵ��
			clearPerson(&abs);
			break;
		case 0:
			cout << "��ӭ�ٴ�ʹ��  " << endl;
			system("pause");
			return 0;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}
