//Ȧ������ ¦������ �����ϴ� ���α׷�

#include<stdio.h>

void odd_even(int integer) {
	if (integer & 1)//Ȧ����� 1�γ��ͼ� ��
		printf("It is an odd number.");
	else//�ƴ϶�� ¦��
		printf("It is an even number.");
}

int main() {
	int integer;
	
	printf("Enter an integer.\n");
	scanf("%d", &integer);
	odd_even(integer);//�Լ� �ҷ�����
	
	return 0;
}