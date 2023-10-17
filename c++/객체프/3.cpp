
// STL�� stack �����̳� ����
// STL�� queue �����̳� ����
#include <iostream>
#include<stack>
#include<queue>
using namespace std;

int main() 
{
	char ch;
	stack<char> s;
	queue<char> q;
	// ���ڸ� ��ҷ� �ϴ� ���� ��ü s�� �ν��Ͻ�ȭ
	// ���ڸ� ��ҷ� �ϴ� ť ��ü q�� �ν��Ͻ�ȭ

	cout << "������ �Է��ϼ���." << endl;
	cout << "�Է��� ������ Enter, Ctrl-z, Enter�� ġ����." << endl;
	while (cin >> ch) 
	{
		if (isalpha(ch))
		{
			s.push(ch);
			q.push(ch);
		}
		// �Է� ���ڰ� ���ĺ� ������ ������
		// ���ð� ť�� Ǫ��
	}
	while (!s.empty()) 
	{ // ������ ��� ���� ���� ������. s.empty( )�Լ� ���.
		// ������ ž�� ť�� ����Ʈ�� ����ؼ� ��.
		// ���� �ٸ��� ���� ������, ������ ���ð� ť�� ��.
		if (s.top() == q.front())
		{
			s.pop();
			q.pop();
		}
		else
			break;
	}
	if (s.empty())
	{
		cout << "It is a palindrome";
	}
	else
		cout << "It is NOT a palindrome";
	// ������ ��� ������ ȸ���� �´ٰ� ���
	// �׷��� ������ ȸ���� �ƴ϶�� ���

	return 0;
}

