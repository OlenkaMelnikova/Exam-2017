// 1.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïðèëîæåíèÿ.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
#define PI 3.14159265 
using namespace std;

class Courner
{
private:
	double courner;
public:
	void get_Courner(double n);
	Courner();
	Courner(double c);
	double getCourner();
	double remake(double corner);
};

Courner::Courner()
{
	courner = 0;
	
}
Courner::Courner(double c)
{
	courner = c;
}
void Courner::get_Courner(double n)
{
	courner = n;
}

double Courner::getCourner()
{
	return courner;
}

double Courner::remake(double courner)
{
	return sin(courner* PI / 180);
}



int main()
{
	setlocale(LC_ALL, "rus");
	Courner temp;
	double curr;
	cin >> curr;
	temp.get_Courner(curr);
	cout << "Ñèíóñ "<<temp.getCourner()<< " ãðàäóñîâ = " << temp.remake(curr) << endl; ;
	
	system("pause");
	return 0;
}
