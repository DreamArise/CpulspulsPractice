#include<iostream>
#include<string>
using namespace std;

struct Stu
{
	string name;
	int age;
};

struct teather
{
	string name;
	int age;
	struct Stu stu;
};

int main4()
{
	teather t;
	
	return 0;
}
