#include<iostream>
using namespace std;

struct CUSTOMER
{
	char name[10];
	int age;
	char gender;
};
int main()
{
	CUSTOMER customer[10];

	int num = 0;
	char menu;
	
	while (true)
	{
		cout << "1.�������Է�" << endl;
		cout << "2.���������" << endl;
		cout << "3.����" << endl;
		cout << "�޴�����: ";

		cin >> menu;

		if (menu == '3')
			break;

		switch (menu)
		{
		case'1':
			if (num == 11)
			{
				cout << "���̻� �� ������ �Է��� �� �����ϴ�.\n";
				continue;
			}
			num++;
			cout << "���̸�: ";
			cin >> customer[num].name;
			while (getchar() != '\n');
			cout << "����: ";
			cin >> customer[num].age;
			while (getchar() != '\n');
			cout << "����(M,F): ";
			cin >> customer[num].gender;
			while (getchar() != '\n');
			break;
		case'2':
			for (int i = 1; i <= num; i++)
			{
				cout << customer[i].name;
				cout.width(20);
				cout << customer[i].age;
				cout.width(3);
				cout << customer[i].gender << endl;
			}
			break;
		default:
			cout << "�߸� �Է��ϼ̽��ϴ�.\n";
			continue;
		}
	}
}