
// STL의 stack 컨테이너 포함
// STL의 queue 컨테이너 포함
#include <iostream>
#include<stack>
#include<queue>
using namespace std;

int main() 
{
	char ch;
	stack<char> s;
	queue<char> q;
	// 문자를 요소로 하는 스택 객체 s를 인스턴스화
	// 문자를 요소로 하는 큐 객체 q를 인스턴스화

	cout << "문장을 입력하세요." << endl;
	cout << "입력이 끝나면 Enter, Ctrl-z, Enter를 치세요." << endl;
	while (cin >> ch) 
	{
		if (isalpha(ch))
		{
			s.push(ch);
			q.push(ch);
		}
		// 입력 문자가 알파벳 범위에 있으면
		// 스택과 큐에 푸시
	}
	while (!s.empty()) 
	{ // 스택이 비어 있지 않을 때까지. s.empty( )함수 사용.
		// 스택의 탑과 큐의 프런트를 계속해서 비교.
		// 서로 다르면 빠져 나오고, 같으면 스택과 큐를 팝.
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
	// 스택이 비어 있으면 회문이 맞다고 출력
	// 그렇지 않으면 회문이 아니라고 출력

	return 0;
}

