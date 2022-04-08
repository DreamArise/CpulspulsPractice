#include<iostream>
using namespace std;
//创建三个抽象类
//CPU
class CPU
{
public:
	virtual void Calcullator() = 0;
};

//显卡
 class Discard
{
public:
	virtual void Display() = 0;
};

//内存条
 class Memory
 {
 public:
	 virtual void storage() = 0;
 };

 class Computer
 {
 public:
	 Computer(CPU* cpu, Discard* dis, Memory* mem)
	 {
		 m_cpu = cpu;
		 m_dis = dis;
		 m_mem = mem;
	 }
	 void doWork()
	 {
		 m_cpu->Calcullator();
		 m_dis->Display();
		 m_mem->storage();
	 }
	 ~Computer()
	 {
		 if (m_cpu != NULL)
		 {
			 delete m_cpu;
			 m_cpu = NULL;
		 }
		 if (m_dis != NULL)
		 {
			 delete m_dis;
			 m_dis = NULL;
		 }
		 if (m_mem != NULL)
		 {
			 delete m_mem;
			 m_mem = NULL;
		 }
	 }
 private:

	 CPU* m_cpu;//cpu的零件指针
	 Discard* m_dis;//显卡的零件指针
	 Memory* m_mem;//内存条的零件指针
 };

 class IntelCPU: public CPU
 {
 public:
	 virtual void Calcullator()
	 {
		 cout << "英特尔CPU工作" << endl;
	 }

 };

 class IntelDis : public Discard
 {
 public:
	 virtual void Display()
	 {
		 cout << "英特尔显卡工作" << endl;
	 }

 };

 class IntelMem : public Memory
 {
 public:
	 virtual void storage()
	 {
		 cout << "英特尔内存卡工作" << endl;
	 }

 };

 void test()
 {
	 //第一台电脑零件
	 CPU* intelCpu = new IntelCPU;
	/* intelCpu->Calcullator();*/
	 Discard* intelDis = new IntelDis;
	 Memory* intelMem = new IntelMem;
	 //创建第一台电脑
	 //Computer computer(intelCpu, intelDis, intelMem);
	 //computer.doWork();
	 //在堆区创建第二台电脑
	 cout << "two" << endl;
	 Computer* comptuer2 = new Computer(intelCpu, intelDis, intelMem);
	 comptuer2->doWork();
	 delete comptuer2;

 }

int main()
{
	test();
	return 0;
}

