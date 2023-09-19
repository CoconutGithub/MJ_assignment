#include <string>
#include <iostream>
using namespace std;

struct node {
	int key;
	struct node* next;
};

class list {
private:
	node* head;   // 연결 리스트의 첫 노드를 가리키는 포인터
	const int a;	// 상수 변수
public:
	bool empty_list();
	void show();
	void insert_first(int key);	// 첫 노드로 삽입
	void remove_first();				// 첫 노드를 제거

	list();
	list(list& from);
	~list();

	friend class stack;					// 여기에 프렌드 클래스로 class stack을 선언
};


bool list::empty_list() 
{ // 빈 리스트이면 true를 그렇지 않으면 false를 리턴
	return (head == NULL);
}

void list::show() 
{ // 연결 리스트의 첫 노드부터 마지막 노드까지 디스플레이
						  // 빈 리스트일 경우 endl을 써서 줄만 바꿈
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
{ // 무조건 연결 리스트의 맨 처음에 삽입
	node* temp = new node;
	temp->key = key;
	node* backup = head;
	head = temp;
	temp->next = backup;
}

void list::remove_first() 
{ // 무조건 연결 리스트의 맨 첫 노드를 삭제
  // 빈 리스트이면 그냥 리턴
	if (head == NULL)
		return;
	else
		head = head->next;

}



list::list() :a(0)
{ // 이 줄의 list() 다음에 초기화 리스트를 써서 a 값을 0으로 초기화할 것.
					// 여기에 리스트를 초기화하는 코드를 삽입할 것.
	head = NULL;
}

list::list(list& from) :a(0)
{ // 이 역시 초기화 리스트를 써서 a 값을 0으로 초기화할 것.
								// 복사 생성자. 깊은 복사라야 함
	if (from.head==NULL) 					// from의 head가 NULL일 경우 처리 
		return;
	else 
	{
		node* temp = from.head;
		head = NULL;
		while (temp != NULL) 
		{  // temp가 NULL이 아닐 때까지
			insert_first(temp->key);// insert_first를 써서 키를 복사. 역순으로 복사됨.
			temp = temp->next;
		}
	}
}

list::~list() {          // 소멸자. 루프를 돌며 맨 첫 노드를 계속 삭제
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
	list* p;  // p는 리스트 클래스 객체를 가리키는 포인터 

	while (true) {
		cin >> str;
		if (str == "i") 
		{ // 입력 키를 받아서 insert_first를 호출
			cin >> key;
			m.insert_first(key);
		}
		else if (str == "r") 
		{ // remove_first를 호출
			m.remove_first();
		}
		else if (str == "c") 
		{
			p = new list(m); 
			// 동적으로 만든 리스트 클래스 객체를 p가 가리키게
			// 동시에 복사 생성자를 이용하여 m을 그 객체로 복사
			cout << "Currently p has ";
			p->show();
			delete p;
			// p가 가리키는 연결 리스트 내용을 디스플레이
			// p가 가리키는 객체를 운영 체제에게 반납

		}
		else if (str == "q")
			break;  // 루프를 빠져 나감

		m.show();		// m의 내용을 디스플레이		 
	}

	system("pause");
	return 0;
}
