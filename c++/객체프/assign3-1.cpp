#include <iostream>
using namespace std;

template <typename T, int size> void sort(T* arr);



int main()
{
	char menu;

	while (true)
	{
		cout << "1.정수 정렬" << endl;
		cout << "2.실수 정렬" << endl;
		cout << "3.종료" << endl;
		cout << "메뉴선택 : ";
		cin >> menu;

		if (menu == '3')
			break;

		switch (menu)
		{
		case'1':
		{
			int arr[5];
			cout << "5개의 정수를 입력하세요 : ";
			for (int i = 0; i < 5; i++)
				cin >> arr[i];
			sort<int, 5>(arr);
			cout << "정렬 결과 : ";
			for (int i = 0; i < 5; i++)
				cout << arr[i] << " ";
			cout << endl;
			break;
		}
		case'2':
		{
			double arr[5];
			cout << "5개의 실수를 입력하세요 : ";
			for (int i = 0; i < 5; i++)
				cin >> arr[i];
			sort<double, 5>(arr);
			cout << "정렬 결과 : ";
			for (int i = 0; i < 5; i++)
				cout << arr[i] << " ";
			cout << endl;
			break;
		}
		default:
			cout << "잘못 입력하셨습니다." << endl;
			continue;
		}
	}
	return 0;
}

template <typename T, int size> void sort(T* arr)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
