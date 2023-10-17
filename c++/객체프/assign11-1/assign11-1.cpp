#include<iostream>
#include<vector>

using namespace std;

#include"assign11-1Customer.h"
#include"assign11-1RegularCustomer.h"

int totalCustomer = 0;

void  InputCustomer(vector<Customer*>& list)
{
	char menu;

	cout << "----- 고객 정보 입력 -----" << endl;
	cout << "1. 일반 고객" << endl;
	cout << "2. 단골 고객" << endl;
	cout << "--------------------------" << endl;
	cout << "메뉴 선택 : ";
	cin >> menu;

	string name;
	string phone;
	string product;

	if (menu != '1' && menu != '2')
		cout << "잘못 입력하셨습니다." << endl;

	cout << "이름 : ";
	cin >> name;
	cout << "전화번호 : ";
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
		cout << "품목명(. 입력시 종료) : ";
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
	cout << "-------- 고객 리스트 ---------" << endl;
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
	cout << "상품명 : ";
	cin >> product;
	cout << "할인율(%) : ";
	cin >> discount;

	for (int i = 0; i < list.size(); i++)
	{
		Customer* pCust = list[i];
		if (pCust->IsRegular())
		{
			if (((RegularCustomer*)pCust)->BuyIt(product))
			{
				cout << pCust->GetPhone() << " --> " << product << " " << discount << "% 세일중" << endl;
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
		cout << "======== 주 메 뉴 ========" << endl;
		cout << "1. 고객 정보 입력" << endl;
		cout << "2. 고객 정보 출력" << endl;
		cout << "3. 세일 정보 전송" << endl;
		cout << "4. 종료" << endl;
		cout << "==========================" << endl;
		cout << "메뉴 선택 : ";
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
			cout << "잘못 입력하셨습니다." << endl;
			continue;
		}
	}
	return 0;
}