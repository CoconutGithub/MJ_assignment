#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct CUSTOMER
{
	string name;
	int age;
	char sex;
};

int main()
{
	vector <CUSTOMER> vec;
	char menu;

	while (true)
	{
		//�޴����
		cout << "1. �� ���� �Է�" << endl;
		cout << "2. �� ���� ���" << endl;
		cout << "3. ����" << endl;
		cout << "�޴� ���� : ";
		cin >> menu;

		if (menu == '3')
			break;

		switch (menu)
		{
		case'1':
		{
			CUSTOMER cust;
			cout << "�� �̸� : ";
			cin >> cust.name;
			cout << "���� : ";
			cin >> cust.age;
			cout << "����(M,F) : ";
			cin >> cust.sex;
			vec.push_back(cust);
			break;
		}
		case'2':
		{
			cout << "-----------------------------------" << endl;
			cout << "�̸�                ���� ����" << endl;
			cout << "-----------------------------------" << endl;
			for (int i = 0; i < vec.size(); i++)
			{
				CUSTOMER& cust = vec[i];

				cout.width(20);
				cout.setf(ios_base::left);
				cout << cust.name;
				cout.width(5);
				cout << cust.age;
				cout << cust.sex << endl;

			}
			cout << "-----------------------------------" << endl << endl;
			break;
		}
		default:
		{
			cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
			continue;
		}
		}
	}
	return 0;
}