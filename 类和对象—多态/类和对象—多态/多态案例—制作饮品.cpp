//#include<iostream>
//using namespace std;
//
////дһ�������� ������Ĺ���
//class abstractDrink
//{
//public:
//	//���
//	virtual void Boil() = 0;
//	//����
//	virtual void Brew() = 0;
//	//���뱭��
//	virtual void PutinCup() = 0;
//	//���븨��
//	virtual void Putsomething() = 0;
//	//������Ʒ
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PutinCup();
//		Putsomething();
//	}
//};
//
//class Coffee :public abstractDrink
//{
//public:
//	//���
//	virtual void Boil() 
//	{
//		cout << "��ũ��ɽȪ" << endl;
//	}
//	//����
//	virtual void Brew()
//	{
//		cout << "����" << endl;
//	}
//	//���뱭��
//	virtual void PutinCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//	//���븨��
//	virtual void Putsomething()
//	{
//		cout << "���Ǻ�ţ��" << endl;
//	}
//
//};
//class Milk :public abstractDrink
//{
//public:
//	//���
//	virtual void Boil()
//	{
//		cout << "��ũ��ɽȪ" << endl;
//	}
//	//����
//	virtual void Brew()
//	{
//		cout << "����" << endl;
//	}
//	//���뱭��
//	virtual void PutinCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//	//���븨��
//	virtual void Putsomething()
//	{
//		cout << "���Ǻ�ţ��" << endl;
//	}
//
//};
//
////void doWork(abstractDrink& abs)
////{
////	abs.makeDrink();
////}
//
////void test()
////{
////	//abstractDrink* abs = new Coffee;//����ָ��ָ������
////	//abs->makeDrink();
////	
////	Coffee* cof = new Coffee;
////	doWork(cof);
////	delete cof;
////}
//
//void test1()
//{
//	Milk milk;
//	milk.makeDrink();
//}
//
//int main()
//{
//	//test();
//	test1();
//	return 0;
//}
//
