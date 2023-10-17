//�ھƵ���� �Ǻ� ���α׷�
#include<stdio.h>
#include<math.h>

//�ھƵ���� �ڸ��� ���ϱ�
int check_digits(int n) {
	int d;
	for (d = 0; n > 0; d++) {
		n /= 10;
	}
	return d;
}
//�ھƵ���� �� ���ϱ�
int check_narciss(int n, int d) {
	int s;
	for (s = 0; n > 0; n /= 10) {
		s += pow(n % 10, d);
	}
	return s;
}
//�ھƵ���� �Ǻ�
int narciss(int a, int b) {
	if (a == b) {
		printf("Yes, %d is a narcissistic number.", a);
		return 1;
	}
	else {
		printf("No, %d is not a narcissistic number.", a);
		return 0;
	}
}
int main() {
	int num, digits, sum;

	printf("Enter a number.\n");
	scanf("%d", &num);

	digits = check_digits(num);//�Լ� ����

	sum = check_narciss(num, digits);//�Լ� ����

	narciss(num, sum);

	return 0;
}