#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
#define MAX 100
//菜单界面
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****" << "  1、添加联系人  " << "*****" << endl;
	cout << "*****" << "  2、显示联系人  " << "*****" << endl;
	cout << "*****" << "  3、删除联系人  " << "*****" << endl;
	cout << "*****" << "  4、查找联系人  " << "*****" << endl;
	cout << "*****" << "  5、修改联系人  " << "*****" << endl;
	cout << "*****" << "  6、清空联系人  " << "*****" << endl;
	cout << "*****" << "  0、退出通讯录  " << "*****" << endl;
	cout << "***************************" << endl;
}
//创建一个联系人的结构体
struct Person
{
	//联系人姓名
	string p_name;
	//联系人性别
	int p_gender=0;
	//年龄
	int p_age=0;
	//电话
	string p_phone;
	//住址
	string p_addr;
};

struct Managesys
{
	//联系人数组
	struct Person personArray[MAX];
	//联系人数纪录
	int m_size=0;
};

void addPerson(struct Managesys *abs)
{
	cout << "请输入联系人姓名：" << endl;
	string name;
	cin >> name;
	abs->personArray[abs->m_size].p_name = name;
	cout << "请输入性别:" << endl;
	cout << "1:男，2：女" << endl;
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
			cout << "输入错误，请重新输入" << endl;
		}
	}
	cout << "请输入年龄:" << endl;
	int age = 0;
	while (true)
	{
		cin >> age;
		if (age<=0||age>100)
		{
			cout << "输入错误，请重新输入" << endl;
		}
		else
		{
			abs->personArray[abs->m_size].p_age = age;
			break;
		}
	}
	cout << "请输入联系人电话：" << endl;
	string num;
	cin >> num;
	abs->personArray[abs->m_size].p_phone = num;
	cout << "请输入联系人地址：" << endl;
	string address;
	cin >> address;
	abs->personArray[abs->m_size].p_addr = address;
	abs->m_size++;
	cout << "添加成功" << endl;
	system("pause");
	system("cls");
}
void disPlay(struct Managesys* abs)
{
	if (abs->m_size == 0)
	{
		cout << "无记录" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "姓名：" << abs->personArray[i].p_name 
				<< "\t性别：" << (abs->personArray[i].p_gender==1?"男":"女")
				<<"\t年龄：" << abs->personArray[i].p_age 
				<< "\t电话：" << abs->personArray[i].p_phone 
				<<"\t地址：" << abs->personArray[i].p_addr << endl;
		}
	}
	system("pause");
	system("cls");
}

int isExist(Managesys *abs,string d_name)
{
	for (int i =0;i<abs->m_size;i++)
	{
		//遍历通讯录的名字找出与之相等的
		if (abs->personArray[i].p_name==d_name)
		{
			return i;
		} 
	}
	return -1;
}

void deletePerson(Managesys* abs)
{
	cout << "输入你要删除的联系人" << endl;
	string name;
	cin >> name;
	int ret =isExist(abs, name);
	if (ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		for (int i = ret; i < abs->m_size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		cout << "删除成功" << endl;
		abs->m_size--;
	}
	system("pause");
	system("cls");
}

void checkPerson(Managesys* abs)
{
	cout << "输入你要查找的联系人" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		cout << "姓名：" << abs->personArray[ret].p_name
			<< "\t性别：" << (abs->personArray[ret].p_gender == 1 ? "男" : "女")
			<< "\t年龄：" << abs->personArray[ret].p_age
			<< "\t电话：" << abs->personArray[ret].p_phone
			<< "\t地址：" << abs->personArray[ret].p_addr << endl;
	}
	system("pause");
	system("cls");
}

void modifyPerson(Managesys* abs)
{
	cout << "输入你要修改的联系人" << endl;
	string name;
	cin >> name;
	int ret = isExist(abs, name);
	if (ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		place:cout << "请输入你想要修改的项目" << endl;
		cout << "1、姓名" << "\t" << "2、性别" << "\t" << "3、年龄" << endl;
		cout << "4、电话" << "\t" << "5、家庭住址" << endl;
		int num;
		cin >> num;
		switch (num)
		{
		case 1://修改姓名
		{
			cout << "请输入修改的姓名" << endl;
			string c_name;
			cin >> c_name;
			abs->personArray[ret].p_name = c_name;
			cout << "修改完毕，是否还要修改该联系人的其他项？" << endl;
			cout << "1、是	2、否" << endl;
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
		case 2://修改性别
		{
			cout << "请选择修改的性别" <<"\t";
			cout << "1、男 2、女" << endl;
			int c_sex;
			cin >> c_sex;
			abs->personArray[ret].p_gender = c_sex;
			cout << "修改完毕，是否还要修改该联系人的其他项？" << endl;
			cout << "1、是	2、否" << endl;
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
		case 3://修改年龄
		{
			cout << "请输入修改的年龄" << endl;
			int c_age;
			cin >> c_age;
			abs->personArray[ret].p_age = c_age;
			cout << "修改完毕，是否还要修改该联系人的其他项？" << endl;
			cout << "1、是	2、否" << endl;
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
		case 4://修改电话
		{
			cout << "请输入修改的电话" << endl;
			string c_phone;
			cin >> c_phone;
			abs->personArray[ret].p_phone = c_phone;
			cout << "修改完毕，是否还要修改该联系人的其他项？" << endl;
			cout << "1、是	2、否" << endl;
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
		case 5://修改地址
		{
			cout << "请输入修改的地址" << endl;
			string c_address;
			cin >> c_address;
			abs->personArray[ret].p_addr = c_address;
			cout << "修改完毕，是否还要修改该联系人的其他项？" << endl;
			cout << "1、是	2、否" << endl;
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
	cout << "已清空联系人" << endl;
	system("pause");
	system("cls");
}
int main()
{
	int select = 0;
	//定义一个通讯录的结构体变量
	Managesys abs;
	//初始化联系人数纪录
	abs.m_size = 0;
	while (true)
	{
		showMenu();
		again:cin >> select;
		if (select > 6 || select < 0)
		{
			cout << "输入错误，请重新输入" << endl;
			goto again;
		}
		switch (select)
		{
		case 1://添加一个联系人
			addPerson(&abs);
			break;
		case 2://显示全部联系人
			disPlay(&abs);
			break;
		case 3://删除联系人
			deletePerson(&abs);
			break;
		case 4://查找联系人
			checkPerson(&abs);
			break;
		case 5://修改联系人
			modifyPerson(&abs);
			break;
		case 6://清空联系人
			clearPerson(&abs);
			break;
		case 0:
			cout << "欢迎再次使用  " << endl;
			system("pause");
			return 0;
		default:
			break;
		}
	}
	system("pause");
	return 0;
}
