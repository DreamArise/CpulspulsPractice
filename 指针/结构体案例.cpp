//#include<iostream>
//using namespace std;
//#include<string>
//#include<ctime>
//
//
//struct Student
//{
//	string sname;
//	int score;
//};
//
//struct Teather
//{
//	string tname;
//	struct Student student[5];
//};
//
//void value(struct Teather teather[], int len)
//{
//	string nameSeed = "ABCEF";
//	for (int i = 0; i < len; i++)
//	{
//		teather[i].tname = "Teather_";
//		teather[i].tname += nameSeed[i];
//		/*cout << teather[i].tname << endl;*/
//		for (int j = 0; j < 5; j++)
//		{
//			int random = rand() % 60 + 40;
//			teather[i].student[j].sname = "student_";
//			teather[i].student[j].sname += nameSeed[j];
//			teather[i].student[j].score = random;
//		}
//	}
//}
//
//void myprintf(struct Teather teather[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout<<"老师姓名 " << teather[i].tname << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout <<"\t学生姓名 " << teather[i].student[j].sname <<
//				"  成绩 "<<teather[i].student[j].score<<endl;
//		}
//		cout << endl;
//	}
//}
//
//int main5()
//{
//	srand((unsigned int)time(NULL));
//	struct Teather teather[3];
//	int len = sizeof(teather) / sizeof(teather[0]);
//	value(teather,len);
//	myprintf(teather, len);
//	return 0;
//}