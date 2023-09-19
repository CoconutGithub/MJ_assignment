

#include <string>
#include <iostream>
using namespace std;

struct node 
{
	string key;			// key�� int Ÿ�Կ��� string Ÿ������ ����
	struct node* next;
};

class list 
{
protected:				   	// private�� �����ؾ� ��. ����� �����ϰ�
	node* head;
public:
	list();
	list(list& from);
	~list();

	bool empty_list() const;
	void show() const;
	void insert_first(const string& key);
	void remove_first();
	void insert_last(const string& key);
	void remove_last();

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

void list::insert_first(const string& key) 
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

void  list::insert_last(const string& key) 
{
	node* temp = new node;
	temp->key = key;
	temp->next = NULL;

	if (head == NULL) 
	{
		head = temp;
	}
	else {
		node* last = head;
		while (last->next != NULL) 
		{
			last = last->next;
		}
		last->next = temp;
	}
}

void  list::remove_last() 
{
	if (head == NULL) 
	{					// case when 0 node
		cout << "There is nothing to remove";
		return;
	}
	else if (head->next == NULL) 
	{	// case when 1 node
		delete head;
		head = NULL;
	}
	else 
	{
		node* last = head;				// case when 2 or more nodes
		while (last->next->next != NULL)
			last = last->next;
		delete last->next;
		last->next = NULL;
	}
}



class stack : public list
{			// list class�� �Ļ� Ŭ������ ����
private:

public:
	stack();
	~stack();
	bool empty_stack() const;
	void push(const string& key);
	void pop();
};

stack::stack() 
{

}

stack::~stack() 
{

}

bool stack::empty_stack() const 
{	// �⺻ Ŭ���� �Լ� �� ����// �⺻ Ŭ���� �Լ� ȣ���ؼ� �̿�.
	if (empty_list())
	{
		cout << "stack is empty" << endl;
		return true;
	}
	return false;
}

void stack::push(const string& key) 
{// �⺻ Ŭ���� �Լ� �� ����

	insert_first(key);// �⺻ Ŭ���� �Լ� ȣ���ؼ� �̿�.
}

void stack::pop() 
{						// �⺻ Ŭ���� �Լ� �� ����
	if (empty_stack())
		return;
	else
		remove_first();										// �⺻ Ŭ���� �Լ� ȣ���ؼ� �̿�.

}



int main() 
{
	stack s;
	string command;
	string key;

	while (true) 
	{
		cout << "Enter command" << endl;
		cin >> command;
		if (command == "push") 
		{
			cin >> key;
			s.push(key);
		}
		else if (command == "pop")
			s.pop();
		else
			break;
		s.show();
	}
	system("pause");
	return 0;
}