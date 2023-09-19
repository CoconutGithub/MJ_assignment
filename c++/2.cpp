#include <iostream>
#include <string>
using namespace std;

class instrument 
{
protected:
	string orchestra;// musical instrument. �Ǳ� Ŭ����
public:
	void play() {}
	// play( ) �Լ��� ����	
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
// �� instrument Ŭ������ ��ӹ޴� class trumpet�� ����
// Ŭ���� ���ο� play( ) �Լ��� ����. �� �Լ��� ��para-para���� ���
class piano :public instrument
{
public:
	void play()
	{
		instrument::play();
		cout << "ding-dong" << endl;
	}
};
// �� instrument Ŭ������ ��ӹ޴� class piano�� ����
// Ŭ���� ���ο� play( ) �Լ��� ����. �� �Լ��� ��ding-dong���� ���

int main() 
{
	string s;
	instrument orchestra[3];
	// orchestra[3] �迭�� ��� ��Ұ� instrument Ÿ���� ����Ű�� ����
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
		// "Enter trumpet or piano"��� ���
		// �Է� ���ڿ��� s�� �޾Ƶ���
		// s�� "trumpet"�̸�
		// orchestra[i]�� trumpet ��ü�� ����Ű��
		// �׷��� ������
		// orchestra[i]�� piano ��ü�� ����Ű��
	}
	for (int i = 0; i < 3; i++)
		orchestra[i].play();
	// ��� �迭��ҿ� ���� ó������ ������� play( ) �Լ��� ����
	return 0;
}
