#include<iostream>
using namespace std;
#include<string>
class myPrint
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
};

class myAdd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};

void test()
{
	myPrint myprint;
	myprint("hellow");
	myAdd myadd;
	cout<<myadd(10, 25)<<endl;
}

int main()
{
	test();
	return 0;
}

