//알파벳 소문자가 자음인지 모음인지 구별하는 프로그램

#include<stdio.h>

int is_vowel(char c) {
	switch (c) {
	case'a':
		printf("The characters entered are Vowel.");
		break;
	case'e':
		printf("The characters entered are Vowel.");
		break;
	case'i':
		printf("The characters entered are Vowel.");
		break;
	case'o':
		printf("The characters entered are Vowel.");
		break;
	case'u':
		printf("The characters entered are Vowel.");
		break;                //여기까지 모음
	default:
		printf("The characters entered are Consonant.");
		break;      //모음이 모두 아니라면 자음
	
	}
}

int main() {
	char eng;
	
	printf("Please enter lower case English.\n");  
	scanf("%c", &eng);  //영어 소문자 입력
	is_vowel(eng);

	return 0;

}