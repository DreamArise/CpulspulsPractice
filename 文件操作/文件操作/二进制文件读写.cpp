#include<iostream>
using namespace std;
#include<fstream>

//д�ļ� ����һ���Զ������
class Person
{
public:

	char m_name[64];
	int age;
};

void test()
{
	//����д��������
	ofstream ofs;
	//�ƶ�д�ķ�ʽ
	ofs.open("person.txt", ios::out | ios::binary);
	//д���� ����һ��person����
	Person person = { "lisa", 18 };
	//person.age = 18;
	//person.m_name[64] = "����";
	ofs.write((char*)&person, sizeof(person));
	//�ر��ļ�
	ofs.close();
	cout << " ********************" << endl;
	//�����ƶ��ļ�
	//����������
	ifstream ifs;
	//�Զ������ļ��򿪣�
	ifs.open("person.txt", ios::in | ios::binary);
	//�ж��ļ��Ƿ�򿪳ɹ�
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
	}
	//���ļ�
	ifs.read((char*)&person, sizeof(person));
	cout << "����: " << person.m_name << " ����: " << person.age;
	//�ر��ļ�
	ifs.close();
}

int main()
{
	test();
	return 0;
}

