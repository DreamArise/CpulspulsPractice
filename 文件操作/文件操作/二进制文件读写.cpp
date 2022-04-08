#include<iostream>
using namespace std;
#include<fstream>

//写文件 创建一个自定义对象
class Person
{
public:

	char m_name[64];
	int age;
};

void test()
{
	//创建写的流对象
	ofstream ofs;
	//制定写的方式
	ofs.open("person.txt", ios::out | ios::binary);
	//写内容 创建一个person对象
	Person person = { "lisa", 18 };
	//person.age = 18;
	//person.m_name[64] = "张三";
	ofs.write((char*)&person, sizeof(person));
	//关闭文件
	ofs.close();
	cout << " ********************" << endl;
	//二进制读文件
	//创建流对象
	ifstream ifs;
	//以二进制文件打开，
	ifs.open("person.txt", ios::in | ios::binary);
	//判断文件是否打开成功
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
	}
	//读文件
	ifs.read((char*)&person, sizeof(person));
	cout << "姓名: " << person.m_name << " 年龄: " << person.age;
	//关闭文件
	ifs.close();
}

int main()
{
	test();
	return 0;
}

