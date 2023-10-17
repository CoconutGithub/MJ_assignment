#include<stdio.h>

int main() {
	char ch1[] = { "고건혁" }, ch2[] = { "c언어는 컴퓨터의 언어이기 때문에 외국인과 대화하려면 외국어가 필요하듯이 컴퓨터를 다루려면 c언어를 배워야하기 때문입니다." },
		ch3 = 'A', ch4 = '+';
	
	
	printf("이름:%s\n", ch1);
	printf("수강목적:%s\n", ch2);
	printf("희망학점:%c%c", ch3, ch4);

	return 0;
}