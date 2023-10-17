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
	list();
	list(list& from);
	~list();

	bool empty_list() const;
	void show() const;
	void insert_first(const int& key);
	void remove_first();
	void insert_last(const int& key);   // 추가할 함수
	void remove_last();						// 추가할 함수

};

list::list() 
{
	head = NULL;
}

list::list(list& from)
{
	if (from.head == NULL)
		head = NULL;
	else
	{
		node* temp = from.head;
		while (temp != NULL)
		{
			insert_first(temp->key);
			temp = temp->next;
		}
	}
}

list::~list()
{
	while (head != NULL) 
	{
		remove_first();
	}
	head = NULL;

}

bool list::empty_list() const 
{
	return (head == NULL);
}

void list::show() const
{
	node* temp = head;
	while (temp != NULL)
	{
		cout << temp->key;
		cout << " ";
		temp = temp->next;
	}
	cout << endl;
}

void list::insert_first(const int& key)
{
	node* temp = new node;
	temp->key = key;
	temp->next = head;
	head = temp;
}

void list::remove_first() 
{
	if (empty_list())
		return;
	else 
	{
		node* temp = head;
		head = head->next;
		delete temp;
	}
}

void list::insert_last(const int& key) 
{ // 연결 리스트의 마지막 노드로 추가하는 함수
	node* temp = new node;
	temp->key = key;
	temp->next = NULL;
	if (empty_list())
		head = temp;
	else 
	{
		node* backup = head;
		while (backup->next != NULL)
			backup = backup->next;
		backup->next = temp;
	}
}

void list::remove_last() 
{
	// 연결 리스트의 마지막 노드를 삭제하는 함수
	int i = 0;
	node* temp = head;
	node* temp2 = head;
	while (temp != NULL) 
	{
		i++;
		temp = temp->next;
	}
	if (empty_list())
		return;
	if (i == 1)
	{
		head = NULL;
	}
	else if (i == 2)
	{
		head->next = NULL;
	}
	else
	{
		temp = head;
		while (temp->next->next != NULL)
		{
			temp = temp->next;
		}
		while (temp2->next != NULL)
		{
			temp2 = temp2->next;
		}
		temp->next = NULL;
		delete temp2;
	}
}



class menu 
{
private:
	string command;
	int key;
	list lt;				// 리스트 클래스 객체를 메뉴 클래스의 멤버 변수로


public:
	menu();
	~menu();
	void process_menu();
	// if(insert first), il(insert last), rf(remove first)
	// rl(remove last), q(quit) 등 5개의 명령어를 입력받아 처리함.
	// if, il, rf, rl일 경우 show()를 통해 현재 리스트 출력
	// quit가 들어올 때까지 루프를 돌며 계속
};

menu::menu() :key(0)
{
	list* lt = new list();
}
 // 메뉴 클래스의 생성자 함수


menu::~menu() 
{  // 메뉴 클래스의 소멸자 함수
	lt.~list();
}

void menu::process_menu() 
{
	while (true)
	{
		cin >> command;

		if (command == "if")
		{ 
			cin >> key;
			lt.insert_first(key);
		}
		else if (command == "rf")
		{ 
			lt.remove_first();
		}
		else if (command == "il")
		{
			cin >> key;
			lt.insert_last(key);
		}
		else if (command == "rl")
		{
			lt.remove_last();
		}
		else if (command == "q")
			break;  

		lt.show();
	}

}


int main() {
	menu m;

	m.process_menu();

	system("pause");
	return 0;
}