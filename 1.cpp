// 1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

class square
{
	double side;
public:
	square();
	square(double s);
	void get_side(double n);
	double getSide();
	double get_Area(double side);
};
square::square()
{
	side = 0;
}
square::square(double s)
{
	side = s;
}
void square::get_side(double n)
{
	side = n;
}
double square::getSide()
{
	return side;
}
double square::get_Area(double side)
{
	return side*side;
}
int main()
{
	square temp;
	setlocale(LC_ALL, "rus");
	double side;
	cin >> side;
	temp.get_side(side);
	cout << " ������� �������� �� ������� " << temp.getSide() << " ����� = " << temp.get_Area(side) << endl;
	system("pause");
	return 0;
}