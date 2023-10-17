#include<iostream>
#include<list>

using namespace std;

#include "assign11-2Customer.h"
#include "assign11-2RegularCustomer.h"

int totalCustomer = 0;

void InputCustomer(list<Customer*>& lt)
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
        lt.push_back(p);
    }
    break;
    case '2':
    {
        RegularCustomer* p = new RegularCustomer(++totalCustomer, name, phone);
        lt.push_back(p);
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

void PrintCustomer(const list<Customer*>& lt)
{
    cout << "--------- 고객 리스트 ---------" << endl;
    list<Customer*>::const_iterator it;
    for (it = lt.begin(); it != lt.end(); it++)
    {
        (*it)->Print();
        cout << endl;
    }
    cout << "-------------------------------" << endl;
}

void SendSMS(const list<Customer*>& lt)
{
    string product;
    int discount;
    cout << "상품명 : ";
    cin >> product;
    cout << "할인율(%) : ";
    cin >> discount;

    list<Customer*>::const_iterator it;
    for (it = lt.begin(); it != lt.end(); it++)
    {
        Customer* pCust = *it;
        if (pCust->IsRegular())
        {
            if (((RegularCustomer*)pCust)->BuyIt(product))
            {
                cout << pCust->GetPhone() << " --> " << product
                    << " " << discount << "% 세일 중" << endl;
            }
        }
    }
}

void DeleteCustomer(list<Customer*>& lt)
{
    string name;
    cout << "삭제할 고객명 : ";
    cin >> name;

    list<Customer*>::iterator it;
    for (it = lt.begin(); it != lt.end(); it++)
    {
        if ((*it)->GetName() == name)
        {
            (*it)->Print();
            string yesno;
            cout <<endl<< "정말 삭제하시겠습니까? (Y/N) : ";
            cin >> yesno;
            if (yesno == "Y" || yesno == "y")
            {
                cout << (*it)->GetName() << "고객 정보를 삭제합니다." << endl;
                lt.erase(it);
            }
            else
            {
                cout << "고객 정보 삭제를 취소합니다." << endl;
            }
            break;
        }
    }
    if (it == lt.end() )
        cout << "해당 고객 정보를 찾을 수 없습니다." << endl;
}
 
int main()
{
    char menu;
    list<Customer*> customerList;

    while (true)
    {
        cout << "======== 주 메 뉴 ========" << endl;
        cout << "1. 고객 정보 입력" << endl;
        cout << "2. 고객 정보 출력" << endl;
        cout << "3. 세일 정보 전송" << endl;
        cout << "4. 고객 정보 삭제" << endl;
        cout << "5. 종료" << endl;
        cout << "==========================" << endl;
        cout << "메뉴 선택 : ";
        cin >> menu;

        if (menu == '5')
            break;

        switch (menu)
        {
        case '1':
            InputCustomer(customerList);
            break;
        case '2':
            PrintCustomer(customerList);
            break;
        case '3':
            SendSMS(customerList);
            break;
        case '4':
            DeleteCustomer(customerList);
            break;
        default:
            cout << "잘못 입력하셨습니다." << endl;
            continue;
        }
    }

    return 0;
}