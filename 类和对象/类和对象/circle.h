#pragma once
#include<iostream>
#include"point.h"

using namespace std;
class Circle
{
public:
//set m_r
void SetR(int r);

//get m-r
int GetR();

//set Center
void SetC(Piont center);

//get Center
Piont GetC();
	
private:
	//Ô²ÐÄµÄ×ø±ê
	Piont Center;
	//°ë¾¶
	int m_r;
};