// 입력에 중복된 키가 들어오는 경우는 허용하지 않는 프로그램입니다. 
#include <string>
#include <iostream>
using namespace std;

struct node 
{
	int key;
	struct node* next;
};

class list 
{
private:
	node* head;
public:
	bool empty_list();
	void show();
	void insert(int key);
	int find(int key);
	void remove(int key);

	list() :head(NULL) {}		// 생성자. initialize 함수를 참고하여 작성
	list(const list& from); // 복사 생성자 함수. 반드시 깊은 복사라야 함
	~list();				// 소멸자. destruct 함수를 참고하여 작성
};

int list::find(int key)
{
	node* temp = head;
	if (empty_list())
		return 0;
	else
	{
		int pos = 1;
		while (temp != NULL && temp->key != key)
		{
			pos++;
			temp = temp->next;
		}
		return(temp == NULL) ? 0 : pos;
	}
}

void list::remove(int key)
{
	int position = find(key);
	if (position == 0)
	{
		cout << "No such data" << endl;
		return;
	}
	while (position != 0) {
		if (position == 1)
		{
			node* backup = head;
			head = head->next;
			delete backup;
		}
		else
		{
			node* temp = head;
			for (int i = 2; i < position; i++)
			{
				temp = temp->next;
			}
			node* backup = temp->next;
			temp->next = temp->next->next;
			delete backup;
		}
		position = find(key);
	}
}

list::~list()
{
	if (head == NULL)
		return;
	node* p = head;
	node* n = head->next;
	while (true)
	{
		delete p;
		if (n != NULL)
		{
			p = n;
			n = n->next;
		}
		else
			break;
	}
	return;
}

void list::insert(int key)
{
	node* p = new node;
	p->key = key;
	node* backup = head;
	head = p;
	p->next = backup;
}

list::list(const list& from)
{
	node* temp = from.head;
	head = new node;
	node* copy = head;
	
	while (temp != NULL)
	{
		copy->key = temp->key;
		temp = temp->next;
		if (temp != NULL)
		{
			copy->next = new node;
			copy = copy->next;
		}
		else
			copy->next = NULL;
	}
}


bool list::empty_list() 
{
	return (head == NULL);
}

void list::show()
{
	node* nowNode = head;
	if (empty_list())
		cout << "List is empty" << endl;
	while (nowNode != NULL)
	{
		cout << nowNode->key << " ";
		nowNode = nowNode->next;
	}
	cout << endl;
}

int main() 
{
	string str;
	int key;
	list m;				// list 클래스 객체 생성. 생성자 함수 자동 호출

	while (true) 
	{
		cin >> str;
		if (str == "i") 
		{
			cin >> key;
			m.insert(key);
		}
		else if (str == "d")
		{
			cin >> key;
			m.remove(key);
		}
		else if (str == "c") 
		{   // 새로운 명령 추가
			list* n = new list(m);
			cout << "Current n is ";
			n->show(); cout << endl;
			delete n;	// n의 소멸자 호출
							// 깊은 복사라면 m과 n이 공유되지 않기 때문에
							// 아래 m.show는 그대로 남아서 찍혀야 함
		}
		else if (str == "quit")
			break;
		m.show();
	}
	system("pause");
	return 0;
}