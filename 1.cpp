// 1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

class integer
{
	int number;
public:
	integer();
	integer(int n);
	void get_number(int m);
	int getNumber();
	int getRemaind(int number);
};
integer::integer()
{
	number = 0;
}
integer::integer(int n)
{
	number = n;
}
void integer::get_number(int m)
{
	number = m;
}
int integer::getNumber()
{
	return number;
}
int integer::getRemaind(int number)
{
	return number % 5;
}
int main()
{
	integer temp;
	setlocale(LC_ALL, "rus");
	int number;
	cin >> number;
	temp.get_number(number);
	cout << " Остаток от деления числа " << temp.getNumber() << " на 5 равен = " << temp.getRemaind(number) << endl;
	system("pause");
	return 0;
}