#include <string>
#include <iostream>
using namespace std;

struct node {
	int key;
	struct node* next;
};

class list {
private:
	node* head;   // ���� ����Ʈ�� ù ��带 ����Ű�� ������
	const int a;	// ��� ����
public:
	bool empty_list();
	void show();
	void insert_first(int key);	// ù ���� ����
	void remove_first();				// ù ��带 ����

	list();
	list(list& from);
	~list();

	friend class stack;					// ���⿡ ������ Ŭ������ class stack�� ����
};


bool list::empty_list() 
{ // �� ����Ʈ�̸� true�� �׷��� ������ false�� ����
	return (head == NULL);
}

void list::show() 
{ // ���� ����Ʈ�� ù ������ ������ ������ ���÷���
						  // �� ����Ʈ�� ��� endl�� �Ἥ �ٸ� �ٲ�
	node* temp = head;
	if (empty_list())
		cout << endl;
	while (temp != NULL) 
	{
		cout << temp->key << " ";
		temp = temp->next;
	}
	cout << endl;
}

void list::insert_first(int key) 
{ // ������ ���� ����Ʈ�� �� ó���� ����
	node* temp = new node;
	temp->key = key;
	node* backup = head;
	head = temp;
	temp->next = backup;
}

void list::remove_first() 
{ // ������ ���� ����Ʈ�� �� ù ��带 ����
  // �� ����Ʈ�̸� �׳� ����
	if (head == NULL)
		return;
	else
		head = head->next;

}



list::list() :a(0)
{ // �� ���� list() ������ �ʱ�ȭ ����Ʈ�� �Ἥ a ���� 0���� �ʱ�ȭ�� ��.
					// ���⿡ ����Ʈ�� �ʱ�ȭ�ϴ� �ڵ带 ������ ��.
	head = NULL;
}

list::list(list& from) :a(0)
{ // �� ���� �ʱ�ȭ ����Ʈ�� �Ἥ a ���� 0���� �ʱ�ȭ�� ��.
								// ���� ������. ���� ������ ��
	if (from.head==NULL) 					// from�� head�� NULL�� ��� ó�� 
		return;
	else 
	{
		node* temp = from.head;
		head = NULL;
		while (temp != NULL) 
		{  // temp�� NULL�� �ƴ� ������
			insert_first(temp->key);// insert_first�� �Ἥ Ű�� ����. �������� �����.
			temp = temp->next;
		}
	}
}

list::~list() {          // �Ҹ���. ������ ���� �� ù ��带 ��� ����
	while (true) 
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
}


int main() {
	string str;
	int key;
	list m;
	list* p;  // p�� ����Ʈ Ŭ���� ��ü�� ����Ű�� ������ 

	while (true) {
		cin >> str;
		if (str == "i") 
		{ // �Է� Ű�� �޾Ƽ� insert_first�� ȣ��
			cin >> key;
			m.insert_first(key);
		}
		else if (str == "r") 
		{ // remove_first�� ȣ��
			m.remove_first();
		}
		else if (str == "c") 
		{
			p = new list(m); 
			// �������� ���� ����Ʈ Ŭ���� ��ü�� p�� ����Ű��
			// ���ÿ� ���� �����ڸ� �̿��Ͽ� m�� �� ��ü�� ����
			cout << "Currently p has ";
			p->show();
			delete p;
			// p�� ����Ű�� ���� ����Ʈ ������ ���÷���
			// p�� ����Ű�� ��ü�� � ü������ �ݳ�

		}
		else if (str == "q")
			break;  // ������ ���� ����

		m.show();		// m�� ������ ���÷���		 
	}

	system("pause");
	return 0;
}
