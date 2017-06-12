// 1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
#define PI 3.14159265 
using namespace std;

class Circle
{
	double radius;
public:
	Circle();
	Circle(double r);
	void get_radius(double n);
	double getRadius();
	double getlength(double radius);
};
Circle::Circle()
{
	radius = 0;
}
Circle::Circle(double r)
{
	radius = r;
}
void Circle::get_radius(double n)
{
	radius = n;
}
double Circle::getRadius()
{
	return radius;
}
double Circle::getlength(double radius)
{
	return radius*2*PI;
}
int main()
{
	Circle temp;
	setlocale(LC_ALL, "rus");
	double radius;
	cin >> radius;
	temp.get_radius(radius);
	cout << " Длина дуги равна = " << temp.getlength(radius) << endl;
	system("pause");
	return 0;
}