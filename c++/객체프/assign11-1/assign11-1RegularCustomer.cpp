#include<iostream>

using namespace std;

#include"assign11-1RegularCustomer.h"

RegularCustomer::RegularCustomer(int id, const string& name, const string& phone)
	:Customer(id, name, phone) {}

RegularCustomer::~RegularCustomer(void) {}

void RegularCustomer::AddProducts(const string& product)
{
	m_products.push_back(product);
}

bool RegularCustomer::BuyIt(const string& product)
{
	for (int i = 0; i < m_products.size(); i++)
		if (m_products[i] == product)
			return true;
	return false;
}

void RegularCustomer::Print()const
{
	Customer::Print();
	cout << "[구매상품:";
	for (int i = 0; i < m_products.size(); i++)
		cout << m_products[i] << ",";
	cout << "]";
}

bool RegularCustomer::IsRegular()const
{
	return !(Customer::IsRegular());
}

