//#include<iostream>
//using namespace std;
//#include<string>
////��̬ʹ��ʱ������������ڴ濪�ٵ�����������ָ��������ʱ�޷�����������������
////�������е�Ĭ������������Ϊ�鹹���ߴ��鹹
//
//
//
//class Animal
//{
//public:
//	virtual void speak() = 0;
//	virtual ~Animal() = 0;
//	
//};
//Animal::~Animal()
//{
//	{
//		cout << "Animal ��������" << endl;
//	}
//}
//class Cat:public Animal
//{
//public:
//
//	Cat(string name)
//	{
//		m_Name = new string(name);//�ڶ�������һ���ڴ��name �����ظ�ָ���ַ
//	}
//
//	virtual void speak() {
//		cout <<*m_Name<< "Сè��˵��" << endl;
//	}
//	~Cat()
//	{
//		cout << "Cat����" << endl;
//		if (m_Name != NULL)
//		{
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//	//�����ڶ����������ڴ棬��Ҫ�����������ͷ��ڴ棬���Ǹ�����޷��������������������
//	string *m_Name;
//};
//
//void test()
//{
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	delete animal;
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//
