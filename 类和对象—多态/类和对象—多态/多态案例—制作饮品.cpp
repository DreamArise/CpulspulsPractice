//#include<iostream>
//using namespace std;
//
////写一个抽象类 制作茶的过程
//class abstractDrink
//{
//public:
//	//煮茶
//	virtual void Boil() = 0;
//	//冲泡
//	virtual void Brew() = 0;
//	//倒入杯中
//	virtual void PutinCup() = 0;
//	//加入辅料
//	virtual void Putsomething() = 0;
//	//制作成品
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
//	//煮茶
//	virtual void Boil() 
//	{
//		cout << "煮农夫山泉" << endl;
//	}
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡" << endl;
//	}
//	//倒入杯中
//	virtual void PutinCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	//加入辅料
//	virtual void Putsomething()
//	{
//		cout << "放糖和牛奶" << endl;
//	}
//
//};
//class Milk :public abstractDrink
//{
//public:
//	//煮茶
//	virtual void Boil()
//	{
//		cout << "煮农夫山泉" << endl;
//	}
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡" << endl;
//	}
//	//倒入杯中
//	virtual void PutinCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	//加入辅料
//	virtual void Putsomething()
//	{
//		cout << "放糖和牛奶" << endl;
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
////	//abstractDrink* abs = new Coffee;//父类指针指向子类
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
