//�� ���� ������ ���� ���ϴ� ���α׷�

#include<stdio.h>

//�ϳ��� ���� ������ ���ϴ� �Լ�
int square(int n) {
	return n * n;
}

int main() {
	int a, b, sum;

	printf("Enter a, b.\n");
	scanf("%d %d", &a, &b);  //�� ���� �Է�
	
	sum = square(a) + square(b); //������ ���� ���ϴ� ��
	
	printf("%d", sum);

	return 0;
}