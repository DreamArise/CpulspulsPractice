//#include<iostream>
//using namespace std;
////��ͨ�ļ�������
////class Calculator
////{
////public:
////	int getResult(string oper)
////	{
////		if (oper == "+")
////		{
////			return m_Num1 + m_Num2;
////		}
////		else if(oper == "-")
////		{
////			return m_Num1 - m_Num2;
////		}
////		else if (oper == "*")
////		{
////			return m_Num1 * m_Num2;
////		}
////	}
////
////	int m_Num1;
////	int m_Num2;
////};
////
////void test()
////{
////	Calculator c;
////	c.m_Num1 = 10;
////	c.m_Num2 = 10;
////	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
////}
//
////����ļ�������
//
//class abstractCalculator
//{
//public:
//	virtual int getResult() = 0;//�޷�ʵ��������ֻҪ��һ�����麯��	
//	
//	int m_a;
//	int m_b;
//};
//
//
//class addCalculator: public abstractCalculator
//{
//public:
//	 int getResult()
//	{
//		return m_a + m_b;
//	}
//};
//
//class subCalculator : public abstractCalculator
//{
//public:
//	 int getResult()
//	{
//		return m_a - m_b;
//	}
//}; 
//
//class mulCalculator : public abstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_a * m_b;
//	}
//};
//
//int doCalculator(abstractCalculator& abs)
//{
//	return abs.getResult();
//}
//
//void test2()
//{
//	//��̬�Ĳ�������
//	//�����ָ�������ָ���������
//	abstractCalculator* abs = new addCalculator;
//	abs->m_a = 100;
//	abs->m_b = 100;
//	cout << abs->m_a << "+" << abs->m_b << "=" << abs->getResult() << endl;
//	delete abs;
//	abs = new subCalculator;
//	abs->m_a = 100;
//	abs->m_b = 100;
//	cout << abs->m_a << "-" << abs->m_b << "=" << abs->getResult() << endl;
//	delete abs;
//	abs = new mulCalculator;
//	abs->m_a = 100;
//	abs->m_b = 100;
//	cout << abs->m_a << "*" << abs->m_b << "=" << abs->getResult() << endl;
//	//addCalculator add;
//	//add.m_a = 100;
//	//add.m_b = 100;
//	//cout << doCalculator(add) << endl;
//}
//
//int main()
//{
//	test2();
//	return 0;
//}
//
