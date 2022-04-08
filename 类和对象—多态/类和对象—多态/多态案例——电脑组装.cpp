#include<iostream>
using namespace std;
//��������������
//CPU
class CPU
{
public:
	virtual void Calcullator() = 0;
};

//�Կ�
 class Discard
{
public:
	virtual void Display() = 0;
};

//�ڴ���
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

	 CPU* m_cpu;//cpu�����ָ��
	 Discard* m_dis;//�Կ������ָ��
	 Memory* m_mem;//�ڴ��������ָ��
 };

 class IntelCPU: public CPU
 {
 public:
	 virtual void Calcullator()
	 {
		 cout << "Ӣ�ض�CPU����" << endl;
	 }

 };

 class IntelDis : public Discard
 {
 public:
	 virtual void Display()
	 {
		 cout << "Ӣ�ض��Կ�����" << endl;
	 }

 };

 class IntelMem : public Memory
 {
 public:
	 virtual void storage()
	 {
		 cout << "Ӣ�ض��ڴ濨����" << endl;
	 }

 };

 void test()
 {
	 //��һ̨�������
	 CPU* intelCpu = new IntelCPU;
	/* intelCpu->Calcullator();*/
	 Discard* intelDis = new IntelDis;
	 Memory* intelMem = new IntelMem;
	 //������һ̨����
	 //Computer computer(intelCpu, intelDis, intelMem);
	 //computer.doWork();
	 //�ڶ��������ڶ�̨����
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

