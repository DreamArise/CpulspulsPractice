//#include<iostream>
//using namespace std;
////���������ָ��������� ������̬ʹ��ַ���
//
//
////��̬��̬������׶���󶨺�����ַ
////��̬��̬�����н׶����
//
//class Animal
//{
//public:
//	virtual void speak()//����virtual ����һ���麯��ָ��vfptrָ���麯���� ������ָ�����Animal::speak����
//	{//û�м�virtual��������̳к��̳����ָ��������ָ�룬
//		//����֮������̬���������ָ��ͻᱻָ��������麯��ָ�븲�ǣ�
//		cout << "������˵��" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	 void speak()
//	{
//		cout << "Сè��˵��" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "С����˵��" << endl;
//	}
//};
////��ַ��� ��������animal���󣬵�ַ���ȷ������
////�������è˵�� ������ַ��Ҫ��󶨣����ö�̬
//void doSpeak(Animal& animal)//��������ת��
//{
//	animal.speak();
//}
//
//void test()
//{
//	Cat cat;//
//	doSpeak(cat);//Animal& animal =cat;��������ָ���������
//}
//
//void test1()
//{
//	cout << "sizeof(Animal)= " << sizeof(Animal) << endl;
//}
////��̬��̬��������
////�м̳�����
////����Ҫ��д���ຯ��
//
//int main()
//{
//	test();
//	test1();
//	return 0;
//}
//
