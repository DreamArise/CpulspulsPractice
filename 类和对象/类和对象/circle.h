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
	//Բ�ĵ�����
	Piont Center;
	//�뾶
	int m_r;
};