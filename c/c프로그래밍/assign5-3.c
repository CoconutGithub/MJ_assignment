//숫자인지 영어인지 그 외인지 구별하는 프로그램

#include<stdio.h>

void character(char ch) {
	if (ch >= '0' && ch <= '9')//숫자범위
		printf("It is a digit.");
	else if (ch >= 97 && ch <= 122)//아스키 코드의 알파벳 범위
		printf("It is an alphabet.");
	else//그 외의 경우
		printf("It is neither an alphabet nor a digit.");
}

int main() {
	char ch;
	
	printf("Enter a character.\n");
	scanf("%c", &ch);
	character(ch);
	
	return 0;
}