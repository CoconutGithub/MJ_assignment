#include<iostream>
#include<list>

using namespace std;

#include "assign11-2Customer.h"
#include "assign11-2RegularCustomer.h"

int totalCustomer = 0;

void InputCustomer(list<Customer*>& lt)
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
        lt.push_back(p);
    }
    break;
    case '2':
    {
        RegularCustomer* p = new RegularCustomer(++totalCustomer, name, phone);
        lt.push_back(p);
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

void PrintCustomer(const list<Customer*>& lt)
{
    cout << "--------- �� ����Ʈ ---------" << endl;
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
    cout << "��ǰ�� : ";
    cin >> product;
    cout << "������(%) : ";
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
                    << " " << discount << "% ���� ��" << endl;
            }
        }
    }
}

void DeleteCustomer(list<Customer*>& lt)
{
    string name;
    cout << "������ ���� : ";
    cin >> name;

    list<Customer*>::iterator it;
    for (it = lt.begin(); it != lt.end(); it++)
    {
        if ((*it)->GetName() == name)
        {
            (*it)->Print();
            string yesno;
            cout <<endl<< "���� �����Ͻðڽ��ϱ�? (Y/N) : ";
            cin >> yesno;
            if (yesno == "Y" || yesno == "y")
            {
                cout << (*it)->GetName() << "�� ������ �����մϴ�." << endl;
                lt.erase(it);
            }
            else
            {
                cout << "�� ���� ������ ����մϴ�." << endl;
            }
            break;
        }
    }
    if (it == lt.end() )
        cout << "�ش� �� ������ ã�� �� �����ϴ�." << endl;
}
 
int main()
{
    char menu;
    list<Customer*> customerList;

    while (true)
    {
        cout << "======== �� �� �� ========" << endl;
        cout << "1. �� ���� �Է�" << endl;
        cout << "2. �� ���� ���" << endl;
        cout << "3. ���� ���� ����" << endl;
        cout << "4. �� ���� ����" << endl;
        cout << "5. ����" << endl;
        cout << "==========================" << endl;
        cout << "�޴� ���� : ";
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
            cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
            continue;
        }
    }

    return 0;
}