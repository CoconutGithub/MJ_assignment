#include<iostream>
#include<list>

using namespace std;

int main()
{
	int num;
	list<int> lt;

	while (true)
	{
		cout << "������ �Է��ϼ���(-1�� �Է��ϸ� ����) : ";
		cin >> num;
		if (num == -1)
			break;
		if (num < 0 || num>100)
		{
			cout << "0���� 100������ ���� �Է��ϼ���." << endl;
			continue;
		}
		lt.push_back(num);

	}
	int sum = 0;
	lt.sort();

	cout << "�Էµ� ����(��������) : ";
	list<int>::iterator it;
	for (it = lt.begin(); it != lt.end(); ++it)
	{
		sum += (*it);
		cout << (*it) << " ";
	}
	double average = (double)sum / lt.size();
	cout << "\n�л��� : " << lt.size() << "��, ��� : " << average << "��" << endl;

	return 0;
}