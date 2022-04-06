//#include<iostream>
//using namespace std;
//#include<string>
////建筑类
//class Building
//{
//	//全局函数作为类的友元可以访问类中的私有属性
//	friend void goodGay(Building* building);
//public:
//	Building()
//	{
//		m_SittingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
////访问建筑类中的私有属性
//void goodGay(Building* building)
//{
//	cout << "好基友 全局函数正在访问：" << building->m_SittingRoom << endl;
//	cout << "好基友 全局函数正在访问：" << building->m_BedRoom << endl;
//}
//
//void test0()
//{
//	Building building;
//	goodGay(&building);
//}
//
//int main1()
//{
//	test0();
//	return 0;
//}
//
