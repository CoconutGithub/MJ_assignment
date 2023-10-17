#include<stdio.h>

int main() {

	char initial1, initial2, initial3;

	printf("영문이름의 이니셜을 입력하세요.\n");
	scanf("%c%c%c", &initial1, &initial2, &initial3);
	printf("Initial of your name are %c, %c, and %c.\n", initial1, initial2, initial3);
	
	return 0;
}	