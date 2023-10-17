//소문자를 받아서 대문자를 출력하는 프로그램

#include<stdio.h>

//대문자로 변환하는 함수
char to_upper_case(char ch) {
	
	return ch - 32;
}



int main() {
	char ch1, ch2;

	printf("알파벳 소문자를 입력하세요.\n");// 소문자 입력
	scanf("%c", &ch1);

	ch2 = to_upper_case(ch1);

	printf("소문자%c의 대문자는 %c입니다.", ch1, ch2);//대문자를 출력
}