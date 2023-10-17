#include<iostream>
#include<algorithm>

using namespace std;

#include"assign11-2RegularCustomer.h"

RegularCustomer::RegularCustomer(int id, const string& name, const string& phone)
	:Customer(id, name, phone) {}

RegularCustomer::~RegularCustomer(void) {}

void RegularCustomer::AddProducts(const string& product)
{
	m_products.push_back(product);
}

bool RegularCustomer::BuyIt(const string& product)
{
	vector<string>::iterator it;
	it = find(m_products.begin(), m_products.end(), product);
	if (it != m_products.end())
		return true;
	return false;
}

void RegularCustomer::Print()const
{
	Customer::Print();
	cout << "[구매상품:";
	vector<string>::const_iterator it;
	for (it = m_products.begin(); it != m_products.end(); it++)
		cout << (*it) << ",";
	cout << "]";
}

bool RegularCustomer::IsRegular()const
{
	return true;
}

