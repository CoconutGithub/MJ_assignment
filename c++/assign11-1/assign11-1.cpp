#include<iostream>
#include<vector>

using namespace std;

#include"assign11-1Customer.h"
#include"assign11-1RegularCustomer.h"

int totalCustomer = 0;

void  InputCustomer(vector<Customer*>& list)
{
	char menu;

	cout << "----- �� ���� �Է� -----" << endl;
	cout << "1. �Ϲ� ��" << endl;
	cout << "2. �ܰ� ��" << endl;
	cout << "--------------------------" << endl;
	cout << "�޴� ���� : ";
	cin >> menu;

	string name;
	string phone;
	string product;

	if (menu != '1' && menu != '2')
		cout << "�߸� �Է��ϼ̽��ϴ�." << endl;

	cout << "�̸� : ";
	cin >> name;
	cout << "��ȭ��ȣ : ";
	cin >> phone;
	
	switch (menu)
	{
	case '1':
	{
		Customer* p = new Customer(++totalCustomer, name, phone);
		list.push_back(p);
	}
	break;
	case '2':
	{
		RegularCustomer* p = new RegularCustomer(++totalCustomer, name, phone);
		list.push_back(p);
		cout << "ǰ���(. �Է½� ����) : ";
		while (true)
		{
			cin >> product;
			if (product == ".")
				break;
			p->AddProducts(product);
		}
	}
	break;
	}
}

void PrintCustomer(const vector<Customer*>& list)
{
	cout << "-------- �� ����Ʈ ---------" << endl;
	for (int i = 0; i < list.size(); i++)
	{
		Customer* p = list[i];
		p->Print();
		cout << endl;
	}
	cout << "------------------------------" << endl;
}

void SendSMS(const vector<Customer*>& list)
{
	string product;
	int discount;
	cout << "��ǰ�� : ";
	cin >> product;
	cout << "������(%) : ";
	cin >> discount;

	for (int i = 0; i < list.size(); i++)
	{
		Customer* pCust = list[i];
		if (pCust->IsRegular())
		{
			if (((RegularCustomer*)pCust)->BuyIt(product))
			{
				cout << pCust->GetPhone() << " --> " << product << " " << discount << "% ������" << endl;
			}
		}
	}
}

int main()
{
	char menu;
	vector<Customer*> customerList;

	while (true)
	{
		cout << "======== �� �� �� ========" << endl;
		cout << "1. �� ���� �Է�" << endl;
		cout << "2. �� ���� ���" << endl;
		cout << "3. ���� ���� ����" << endl;
		cout << "4. ����" << endl;
		cout << "==========================" << endl;
		cout << "�޴� ���� : ";
		cin >> menu;

		if (menu == '4')
			break;

		switch (menu)
		{
		case'1':
			InputCustomer(customerList);
			break;
		case'2':
			PrintCustomer(customerList);
			break;
		case'3':
			SendSMS(customerList);
			break;
		default:
			cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
			continue;
		}
	}
	return 0;
}