//5�� ����� �� ���� ���� ���ϴ� ���α׷�
#include<stdio.h>

int main() {
	int max, num, sum=0;

	printf("Enter a natural number.\n");
	scanf("%d", &max);

	for (num = 1; num <= max; num++) {
		if (num % 5 == 0)
			continue;//num�� 5�� ������ ������ ���� �Ѿ��
		sum += num;
	}
	printf("The sum is %d", sum);

	return 0;
}