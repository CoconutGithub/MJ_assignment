#include <iostream>
#include <string>
using namespace std;

class instrument 
{
protected:
	string orchestra;// musical instrument. 악기 클래스
public:
	void play() {}
	// play( ) 함수를 정의	
};

class trumpet :public instrument 
{
public:
	void play()
	{
		instrument::play();
		cout << "para-para" << endl;
	}
};
// 위 instrument 클래스를 상속받는 class trumpet을 정의
// 클래스 내부에 play( ) 함수를 정의. 이 함수는 “para-para”를 출력
class piano :public instrument
{
public:
	void play()
	{
		instrument::play();
		cout << "ding-dong" << endl;
	}
};
// 위 instrument 클래스를 상속받는 class piano를 정의
// 클래스 내부에 play( ) 함수를 정의. 이 함수는 “ding-dong”을 출력

int main() 
{
	string s;
	instrument orchestra[3];
	// orchestra[3] 배열의 모든 요소가 instrument 타입을 가리키게 선언
	for (int i = 0; i < 3; i++) 
	{
		cout << "Enter trumpet or piano" << endl;
		cin >> s;
		if (s == "trumpet")
		{
			trumpet* t = new trumpet;
			orchestra[i] = *t;
		}
		else
		{
			piano* p = new piano;
			orchestra[i] = *p;
		}
		// "Enter trumpet or piano"라고 출력
		// 입력 문자열을 s로 받아들임
		// s가 "trumpet"이면
		// orchestra[i]가 trumpet 객체를 가리키게
		// 그렇지 않으면
		// orchestra[i]가 piano 객체를 가리키게
	}
	for (int i = 0; i < 3; i++)
		orchestra[i].play();
	// 모든 배열요소에 대해 처음부터 순서대로 play( ) 함수를 실행
	return 0;
}
