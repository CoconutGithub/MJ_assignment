//�ҹ��ڸ� �޾Ƽ� �빮�ڸ� ����ϴ� ���α׷�

#include<stdio.h>

//�빮�ڷ� ��ȯ�ϴ� �Լ�
char to_upper_case(char ch) {
	
	return ch - 32;
}



int main() {
	char ch1, ch2;

	printf("���ĺ� �ҹ��ڸ� �Է��ϼ���.\n");// �ҹ��� �Է�
	scanf("%c", &ch1);

	ch2 = to_upper_case(ch1);

	printf("�ҹ���%c�� �빮�ڴ� %c�Դϴ�.", ch1, ch2);//�빮�ڸ� ���
}