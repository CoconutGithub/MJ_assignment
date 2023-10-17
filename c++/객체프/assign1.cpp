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
		cout << "1.고객정보입력" << endl;
		cout << "2.고객정보출력" << endl;
		cout << "3.종료" << endl;
		cout << "메뉴선택: ";

		cin >> menu;

		if (menu == '3')
			break;

		switch (menu)
		{
		case'1':
			if (num == 11)
			{
				cout << "더이상 고객 정보를 입력할 수 없습니다.\n";
				continue;
			}
			num++;
			cout << "고객이름: ";
			cin >> customer[num].name;
			while (getchar() != '\n');
			cout << "나이: ";
			cin >> customer[num].age;
			while (getchar() != '\n');
			cout << "성별(M,F): ";
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
			cout << "잘못 입력하셨습니다.\n";
			continue;
		}
	}
}