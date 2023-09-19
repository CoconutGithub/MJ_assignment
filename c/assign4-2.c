//두 수의 제곱의 합을 구하는 프로그램

#include<stdio.h>

//하나의 수의 제곱을 구하는 함수
int square(int n) {
	return n * n;
}

int main() {
	int a, b, sum;

	printf("Enter a, b.\n");
	scanf("%d %d", &a, &b);  //두 수를 입력
	
	sum = square(a) + square(b); //제곱의 합을 구하는 식
	
	printf("%d", sum);

	return 0;
}