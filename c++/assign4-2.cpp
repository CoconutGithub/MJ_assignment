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
		//메뉴출력
		cout << "1. 고객 정보 입력" << endl;
		cout << "2. 고객 정보 출력" << endl;
		cout << "3. 종료" << endl;
		cout << "메뉴 선택 : ";
		cin >> menu;

		if (menu == '3')
			break;

		switch (menu)
		{
		case'1':
		{
			CUSTOMER cust;
			cout << "고객 이름 : ";
			cin >> cust.name;
			cout << "나이 : ";
			cin >> cust.age;
			cout << "성별(M,F) : ";
			cin >> cust.sex;
			vec.push_back(cust);
			break;
		}
		case'2':
		{
			cout << "-----------------------------------" << endl;
			cout << "이름                나이 성별" << endl;
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
			cout << "잘못 입력하셨습니다." << endl;
			continue;
		}
		}
	}
	return 0;
}