// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class NDate
{
private:
	int month;
	int day;
	int year;
public:
	void NextDate(int m, int d, int y);
	void play();
};
void NDate::NextDate(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
	cout << "�������������:" << year << "��" << month << "��" << day << "��" << endl;
	if (month == 2)
	{
		if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
		{
			if (day == 29)
			{
				month = month + 1;
				day = 1;
			}
			else
			{
				month = month;
				day = day + 1;
			}
		}
		else
		{
			if (day == 28)
			{
				month = month + 1;
				day = 1;
			}
			else
			{
				month = month;
				day = day + 1;
			}
		}
	}
	else if (month == 12)
	{
		if (day == 31)
		{
			month = 1;
			day = 1;
		}
		else
		{
			month = month;
			day = day + 1;
		}
	}
	else if ((month == 4) || (month == 6) || (month == 11) || (month == 9))
	{
		if (day == 30)
		{
			month = month + 1;
			day = 1;
		}
		else
		{
			month = month;
			day = day + 1;
		}
	}
	else   if (day == 31)
	{
		month = month + 1;
		day = day + 1;
	}
	else
	{
		month = month;
		day = day + 1;
	}
	if (m == 12 && d == 31)
	{
		year = year + 1;
		month = 1;
		day = 1;
	}
}
void NDate::play()
{
	cout << "���һ�����:" << year << "��" << month << "��" << day << "��" << endl;
}
int main()
{
	NDate A;
	A.NextDate(2, 28, 2000);
	A.play();
	return 0;
}
