//���ĺ� �ҹ��ڰ� �������� �������� �����ϴ� ���α׷�

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
		break;                //������� ����
	default:
		printf("The characters entered are Consonant.");
		break;      //������ ��� �ƴ϶�� ����
	
	}
}

int main() {
	char eng;
	
	printf("Please enter lower case English.\n");  
	scanf("%c", &eng);  //���� �ҹ��� �Է�
	is_vowel(eng);

	return 0;

}