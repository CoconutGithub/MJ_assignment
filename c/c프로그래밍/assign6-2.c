//���� �޾Ƽ� �� �ڸ��� ��ŭ 9 ���ϴ� ���α׷�
#include<stdio.h>

int main() {
	int num, term, nine=0,sum = 0;

	printf("Enter the number of terms.\n");
	scanf("%d", &term);


	for (num = 1; num <= term; num++) {
		sum += nine * 10 + 9;//�� ���ϱ�
		nine= nine * 10 + 9;//���� 9�� �� �����
	}
		
	printf("The sum is %d",sum);

	return 0;
}