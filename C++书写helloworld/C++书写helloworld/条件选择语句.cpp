#include<iostream>
using namespace std;

int main3()
{
	int scored = 0;
	cout << "��������ķ���" << endl;
	cin >> scored;
	cout << "������ķ�����:" << scored << endl;
	if (scored >= 600)
	{
		cout << "�㿼�Ĵ�ѧ��һ��" << endl;
		if (scored >=700)
		{
			cout << "�㿼�����廪" << endl;
		}
		else
		{
			cout << "�㿼���Ǳ���" << endl;
		}
	}
	else if (scored >= 400)
	{
		cout << "�㿼���Ƕ���" << endl;
	}
	else
	{
		cout << "��û����" << endl;
	}

	system("pause");
	return 0;
}