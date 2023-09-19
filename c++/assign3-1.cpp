#include <iostream>
using namespace std;

template <typename T, int size> void sort(T* arr);



int main()
{
	char menu;

	while (true)
	{
		cout << "1.���� ����" << endl;
		cout << "2.�Ǽ� ����" << endl;
		cout << "3.����" << endl;
		cout << "�޴����� : ";
		cin >> menu;

		if (menu == '3')
			break;

		switch (menu)
		{
		case'1':
		{
			int arr[5];
			cout << "5���� ������ �Է��ϼ��� : ";
			for (int i = 0; i < 5; i++)
				cin >> arr[i];
			sort<int, 5>(arr);
			cout << "���� ��� : ";
			for (int i = 0; i < 5; i++)
				cout << arr[i] << " ";
			cout << endl;
			break;
		}
		case'2':
		{
			double arr[5];
			cout << "5���� �Ǽ��� �Է��ϼ��� : ";
			for (int i = 0; i < 5; i++)
				cin >> arr[i];
			sort<double, 5>(arr);
			cout << "���� ��� : ";
			for (int i = 0; i < 5; i++)
				cout << arr[i] << " ";
			cout << endl;
			break;
		}
		default:
			cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
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
