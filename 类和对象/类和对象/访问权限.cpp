#include<iostream>
using namespace std;

//���һ���˵���
class Peopel
{
public:
	//���һ������
	void creatName(string name)
	{
		 m_name = name;
	}
	//��ȡһ������
	string getName()
	{
		return m_name;
	}

	void setAge(int age)
	{
		if (age > 18 || age < 0)
		{
			cout << "��������" << endl;
		}
		m_age = age;
	}
	void disAge()
	{
		cout << m_age << endl;
	}
private:
	//���� �ɶ���д
	string m_name;
	//ֻ��
	int m_age;
	//ֻд
	string m_love;
};



int main2()
{
	Peopel p1;
	//p1.m_name;
	p1.creatName("����");
	p1.setAge(18);
	p1.disAge();
	cout<<p1.getName()<<endl;
	
	return 0;
}