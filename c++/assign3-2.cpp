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
		cout << "������ �Է��ϼ��� (-1�� �Է��ϸ� ����) : ";
		cin >> num;
		if (num == -1)
			break;
		if (num < 0 || num>100)
		{
			cout << "0���� 100 ������ ���� �Է��ϼ���." << endl;
			continue;
		}
		AddData(list, num);
	}
	int sum = 0, count = 0;
	NODE* pNode = list.head;

	cout << "�Էµ� ���� : ";
	while(pNode != NULL)
	{
		sum += pNode->data;
		cout << pNode->data << " ";
		pNode = pNode->next;
		count++;
	}
	double average = (double)sum / count;
	cout << "�л��� : " << count << "��, ��� : " << average << "��" << endl;

	RemoveList(list);

	return 0;
}

