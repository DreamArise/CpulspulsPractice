//#include<iostream>
//using namespace std;
////成员函数让运算符重载
////全局函数让运算符重载
//
//class Person
//{
//public:
//	//成员函数让两个类相加
//	Person operator+(Person& p)
//	//
//		Person temp;
//		temp.m_a = this->m_a+ p.m_a;//自身对象的m_a属性加上传进来的m_a属性赋值给创建的
//		temp.m_b = this->m_b+ p.m_b;
//		return temp;
//	}
//public:
//	int m_a;
//	int m_b;
//};
////全局函数让两个类相加
//
//Person operator+(Person& p1, Person& p2)
//{
//	Person temp;
//	temp.m_a = p1.m_a + p2.m_a;
//	temp.m_b = p1.m_b + p2.m_b;
//	return temp;
//}
//
//Person operator+(Person& p1, int num)
//{
//	Person temp;
//	temp.m_a = p1.m_a + num;
//	temp.m_b = p1.m_b + num;
//	return temp;
//}
//void test()
//{
//	Person p1;
//	p1.m_a = 10;
//	p1.m_b = 10;
//	Person p2;
//	p2.m_a = 10;
//	p2.m_b = 10;
//	
//	//Person p3 = p1 + p2;
//	//本质
//	Person p3 = p1.operator+(p2);
//	//Person p3 = p1 + p2;
//	//本质
//	//Person p3 = operator+(p1, p2);
//	Person p4 = p1 + 100;
//	cout << "p3.m_a= " << p3.m_a << endl;
//	cout << "p3.m_b= " << p3.m_b << endl;
//
//	cout << "p4.m_a= " << p4.m_a << endl;
//	cout << "p4.m_b= " << p4.m_b << endl;
//}
//
//
//int main1()
//{
//	test();
//	return 0;
//}
//
