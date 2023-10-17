#include<iostream>
using namespace std;

struct NODE
{
	int data;
	NODE* next;
};

struct LIST
{
	NODE* head;
	NODE* tail;
};

void InitializeList(LIST& rlist)
{
	rlist.head = NULL;
	rlist.tail = NULL;
	NODE* next = NULL;
}

void AddData(LIST& rlist, int data)
{
	if (NULL != rlist.head)
	{
		rlist.tail->next = (NODE*)new (NODE);
		rlist.tail = rlist.tail->next;
	}
	else
	{
		rlist.head=(NODE*)new (NODE);
		rlist.tail = rlist.head;

	}
	rlist.tail->data = data;
	rlist.tail->next = NULL;

}

void RemoveList(LIST& rlist)
{
	NODE* pNode = rlist.head;
	do
	{
		delete(pNode);
	} while (pNode != NULL);
}

int main()
{
	int num;
	LIST list;
	NODE node;
	InitializeList(list);

	while (true)
	{
		cout << "성적을 입력하세요 (-1을 입력하면 종료) : ";
		cin >> num;
		if (num == -1)
			break;
		if (num < 0 || num>100)
		{
			cout << "0에서 100 사이의 값을 입력하세요." << endl;
			continue;
		}
		AddData(list, num);
	}
	int sum = 0, count = 0;
	NODE* pNode = list.head;

	cout << "입력된 점수 : ";
	while(pNode != NULL)
	{
		sum += pNode->data;
		cout << pNode->data << " ";
		pNode = pNode->next;
		count++;
	}
	double average = (double)sum / count;
	cout << "학생수 : " << count << "명, 평균 : " << average << "점" << endl;

	RemoveList(list);

	return 0;
}

