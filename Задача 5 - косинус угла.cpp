// 1.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïðèëîæåíèÿ.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
#define PI 3.14159265 
using namespace std;

class Corner
{
	double corner;
public:
	Corner();
	Corner(double c);
	void get_Corner(double n);
	double getCorner();
	double remake(double corner);
};
Corner::Corner()
{
	corner = 0;
}
Corner::Corner(double c)
{
	corner = c;
}
void Corner::get_Corner(double n)
{
	corner = n;
}
double Corner::getCorner()
{
	return corner;
}
double Corner::remake(double corner)
{
	return cos(corner*PI / 180);
}
int main()
{
	setlocale(LC_ALL, "rus");
	Corner temp;
	double curr;
	cin >> curr;
	temp.get_Corner(curr);
	cout << " Êîñèíóñ " << temp.getCorner() << " ãðàäóñîâ = " << temp.remake(curr) << endl;
	system("pause");
	return 0;
}
