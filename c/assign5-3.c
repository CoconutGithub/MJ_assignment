//�������� �������� �� ������ �����ϴ� ���α׷�

#include<stdio.h>

void character(char ch) {
	if (ch >= '0' && ch <= '9')//���ڹ���
		printf("It is a digit.");
	else if (ch >= 97 && ch <= 122)//�ƽ�Ű �ڵ��� ���ĺ� ����
		printf("It is an alphabet.");
	else//�� ���� ���
		printf("It is neither an alphabet nor a digit.");
}

int main() {
	char ch;
	
	printf("Enter a character.\n");
	scanf("%c", &ch);
	character(ch);
	
	return 0;
}