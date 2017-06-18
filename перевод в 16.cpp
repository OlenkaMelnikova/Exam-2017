// 1.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïðèëîæåíèÿ.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class integer
{
	int number;
public:
	integer();
	integer(int n);
	void get_number(int m);
	int getNumber();
	string inttohex(int number);
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
string integer::inttohex(int number)
{
	string tmp("");
	do
	{
		int r(number % 16);
		if (r>9) { r += (int)'A' - 10; }
		else { r += (int)'0'; };
		tmp = (char)r + tmp;
		number /= 16;
	} while (number);
	return tmp;
}

int main()
{
	integer temp;
	int number;
	setlocale(LC_ALL, "rus");
	cin >> number;
	temp.get_number(number);
	cout << "×èñëî " << temp.getNumber() << " â øåñòíàäöàòèðè÷íîé ñèñòåìå ñ÷èñëåíèÿ : " << temp.inttohex(number) << endl;
	system("pause");
	return 0;
}
