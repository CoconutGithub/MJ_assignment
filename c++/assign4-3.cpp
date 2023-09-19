#include<iostream>
#include<list>

using namespace std;

int main()
{
	int num;
	list<int> lt;

	while (true)
	{
		cout << "성적을 입력하세요(-1을 입력하면 종료) : ";
		cin >> num;
		if (num == -1)
			break;
		if (num < 0 || num>100)
		{
			cout << "0에서 100사이의 값을 입력하세요." << endl;
			continue;
		}
		lt.push_back(num);

	}
	int sum = 0;
	lt.sort();

	cout << "입력된 점수(오름차순) : ";
	list<int>::iterator it;
	for (it = lt.begin(); it != lt.end(); ++it)
	{
		sum += (*it);
		cout << (*it) << " ";
	}
	double average = (double)sum / lt.size();
	cout << "\n학생수 : " << lt.size() << "명, 평균 : " << average << "점" << endl;

	return 0;
}