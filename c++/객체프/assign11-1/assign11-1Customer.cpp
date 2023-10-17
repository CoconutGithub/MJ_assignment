#include<iostream>
using namespace std;
#include"assign11-1Customer.h"

Customer::Customer(int id, const string& name, const string& phone)
	:m_id(id), m_name(name), m_phone(phone) {}

Customer::~Customer(void) {}

void Customer::Print()const
{
	cout << m_id << ": " << m_name << " " << m_phone << " ";
}

bool Customer::IsRegular()const
{
	return false;
}

const string& Customer::GetName()const
{
	return m_name;
}

const string& Customer::GetPhone()const
{
	return m_phone;
}

