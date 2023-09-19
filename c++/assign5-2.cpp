#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

#include<time.h>

class Date
{
protected:
	int m_year;
	int m_month;
	int m_day;
public:
	void SetAsToday();
	void Print();
	int GetYear();
	int GetMonth();
	int GetDay();
	bool SetYear(int year);
	bool SetMonth(int month);
	bool SetDay(int day);
	int GetLastDayOfMonth();
};

void Date::SetAsToday()
{
	time_t current;
	time(&current);
	tm* today = localtime(&current);
	m_year = today->tm_year + 1900;
	m_month = today->tm_mon + 1;
	m_day = today->tm_mday;
}

void Date::Print()
{
	cout << m_year << "��" << m_month << "��" << m_day << "��";
}

int Date::GetYear()
{
	return m_year;
}

int Date::GetMonth()
{
	return m_month;
}

int Date::GetDay()
{
	return m_day;
}

bool Date::SetYear(int year)
{
	if (year < 0 || year>5000)
		return false;
	m_year = year;
	return true;
}

bool Date::SetMonth(int month)
{
	if (month < 1 || month>12)
		return false;
	m_month = month;
	return true;
}

bool Date::SetDay(int day)
{
	if (day<1 || day>GetLastDayOfMonth())
		return false;
	m_day = day;
	return true;
}

int Date::GetLastDayOfMonth()
{
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	int IsLeapYear = 0;
	if (m_year % 4 == 0)
	{
		IsLeapYear = 1;
		if (m_year % 100 == 0)
		{
			IsLeapYear = 0;
			if (m_year % 400 == 0)
			{
				IsLeapYear = 1;
			}
		}
	}
	if (IsLeapYear==1)
		days[1] = 29;
	return days[m_month - 1];
}

int main()
{
	Date d1;
	d1.SetAsToday();
	cout << "���� ��¥�� ";
	d1.Print();
	cout << "�Դϴ�." << endl;

	int year, month, day;

	cout << "��, ��, ���� �Է��ϼ��� : ";
	cin >> year >> month >> day;

	if (!d1.SetYear(year))
		cout << "������ ������ �� �����ϴ�. 0~5000������ ������ �����ϼ���." << endl;
	else if (!d1.SetMonth(month))
		cout << "���� ������ �� �����ϴ�. 1~12������ ������ �����ϼ���." << endl;
	else if (!d1.SetDay(day))
		cout << "���� ������ �� �����ϴ�. 1~" << d1.GetLastDayOfMonth() << "������ ������ �����ϼ���." << endl;
	else
	{
		cout << "������ ��¥�� ";
		d1.Print();
		cout << "�Դϴ�." << endl;
	}

	return 0;
}