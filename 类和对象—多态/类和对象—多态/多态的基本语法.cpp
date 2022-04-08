//#include<iostream>
//using namespace std;
////静态多态：函数重载，运算符重载
////动态多态：派生类和虚函数，纯虚函数
//
////静态多态：编译阶段早绑定函数地址
////动态多态：运行阶段晚绑定
//
//class Animal
//{
//public:
//	virtual void speak()
//	{
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
////动态多态满足条件
////有继承条件
////子类要重写父类函数
//
//int main()
//{
//	test();
//	return 0;
//}
//
