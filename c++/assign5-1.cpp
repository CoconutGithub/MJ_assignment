#include<iostream>
using namespace std;

class Point
{
protected:
	int m_x, m_y;

public:
	void Print();
	bool IsEqual(const Point& p);
	int GetX();
	int GetY();
	bool SetX(int x);
	bool SetY(int y);
};

void Point::Print()
{
	cout << "(" << m_x << "," << m_y << ")";
}

bool Point::IsEqual(const Point& p)
{
	return (m_x == p.m_x && m_y == p.m_y);
}

int Point::GetX()
{
	return m_x;
}

int Point::GetY()
{
	return m_y;
}

bool Point::SetX(int x)
{
	if (x > 1000)
	{
		m_x = 1000;

		return false;
	}
	if (x < 0)
	{
		m_x = 0;

		return false;
	}

	m_x = x;

	return true;
}

bool Point::SetY(int y)
{
	if (y > 1000)
	{
		m_y = 1000;

		return false;
	}
	if (y < 0)
	{
		m_y = 0;

		return false;
	}

	m_y = y;

	return true;
}

int main()
{
	Point p1;
	
	if (!p1.SetX(10))
		cout << "x ÁÂÇ¥ º¯°æ ½ÇÆÐ" << endl;
	if (!p1.SetY(10))
		cout << "y ÁÂÇ¥ º¯°æ ½ÇÆÐ" << endl;
	cout << "p1 = ";
	p1.Print();
	cout << endl;

	if (!p1.SetX(1500))
		cout << "x ÁÂÇ¥ º¯°æ ½ÇÆÐ" << endl;
	if (!p1.SetY(-100))
		cout << "y ÁÂÇ¥ º¯°æ ½ÇÆÐ" << endl;
	cout << "p1 = ";
	p1.Print();
	cout << endl;

	return 0;
}