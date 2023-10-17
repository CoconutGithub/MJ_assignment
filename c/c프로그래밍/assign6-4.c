//자아도취수 판별 프로그램
#include<stdio.h>
#include<math.h>

//자아도취수 자릿수 구하기
int check_digits(int n) {
	int d;
	for (d = 0; n > 0; d++) {
		n /= 10;
	}
	return d;
}
//자아도취수 값 구하기
int check_narciss(int n, int d) {
	int s;
	for (s = 0; n > 0; n /= 10) {
		s += pow(n % 10, d);
	}
	return s;
}
//자아도취수 판별
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

	digits = check_digits(num);//함수 대입

	sum = check_narciss(num, digits);//함수 대입

	narciss(num, sum);

	return 0;
}