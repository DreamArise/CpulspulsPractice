//#include<iostream>
//using namespace std;
//#include<string>
//class Number
//{
//	friend ostream& operator<<(ostream& cout, Number& num);
//
//public:
//	////ǰ��++�����
//	//Number& operator++()
//	//{
//	//	i++;
//	//	return *this;
//	//}
//	//����++�����
//	Number operator++(int)//ռλ����
//	{
//		Number temp = *this;
//		i++;
//		return temp;
//	}
//
//private:
//	int i = 0;
//};
//ostream& operator<<(ostream& cout, Number& num)
//{
//	cout << num.i;
//	return cout;
//}
////void test2()
////{
////	Number num;
////	cout << ++num << endl;
////	//cout << num << endl;
//////}
//
//void test3()
//{
//	Number num;
//	cout << num++ << endl;
//	//cout << num << endl;
//}
//
//int main()
//{
//	//test2();
//	test3();
//	return 0;
//}
//
