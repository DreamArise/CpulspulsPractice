//#include<iostream>
//using namespace std;
//#include<string>
////多态使用时，如果子类有内存开辟到堆区，父类指针在析构时无法调用子类析构函数
////将父类中的默认析构函数改为虚构或者纯虚构
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
//		cout << "Animal 析构函数" << endl;
//	}
//}
//class Cat:public Animal
//{
//public:
//
//	Cat(string name)
//	{
//		m_Name = new string(name);//在堆区开辟一个内存放name 并返回改指针地址
//	}
//
//	virtual void speak() {
//		cout <<*m_Name<< "小猫在说话" << endl;
//	}
//	~Cat()
//	{
//		cout << "Cat析构" << endl;
//		if (m_Name != NULL)
//		{
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//	//子类在堆区开辟了内存，需要用析构函数释放内存，但是父类的无法调用子类的析构函数，
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
