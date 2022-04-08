//#include<iostream>
//using namespace std;
////父类的引用指向子类对象 发生多态使地址晚绑定
//
//
////静态多态：编译阶段早绑定函数地址
////动态多态：运行阶段晚绑定
//
//class Animal
//{
//public:
//	virtual void speak()//加上virtual 多了一个虚函数指针vfptr指向虚函数表 表内容指向这个Animal::speak函数
//	{//没有加virtual但是子类继承后会继承这个指向父类的这个指针，
//		//加完之后发生多态，父类这个指针就会被指向子类的虚函数指针覆盖，
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	 void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//};
////地址早绑定 ，现在是animal对象，地址早就确定好了
////如果想让猫说话 函数地址需要晚绑定，运用多态
//void doSpeak(Animal& animal)//无需类型转化
//{
//	animal.speak();
//}
//
//void test()
//{
//	Cat cat;//
//	doSpeak(cat);//Animal& animal =cat;父类引用指向子类对象
//}
//
//void test1()
//{
//	cout << "sizeof(Animal)= " << sizeof(Animal) << endl;
//}
////动态多态满足条件
////有继承条件
////子类要重写父类函数
//
//int main()
//{
//	test();
//	test1();
//	return 0;
//}
//
