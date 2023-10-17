#include<stdio.h>
#include<stdarg.h>

//평균을 구하는 함수
double average(int count, ...) {
	int i, a, average=0;
	va_list(n);
	va_start(n, count);
	
	a = va_arg(n, int);
	for (i = 2; i <= count; i++) {
		a += va_arg(n, int);
		average=a / i;
	}
	va_end(n);
	return average;
}
int main() {
	int num, a, b, c;
	printf("Enter number of arguments.It must be 2 or 3.\n");
	scanf("%d", &num);//입력받는 정수의 개수를 받음
	if (num == 2) {//입력받는 정수의 개수에 따라 경우를 나눔
		printf("Enter two integers.\n");
		scanf("%d %d", &a, &b);
		printf("Average value is %lf\n", average(num, a, b));//2개일때
	}
	else {
		printf("Enter three integers.\n");
		scanf("%d %d %d", &a, &b,&c);
		printf("Average value is %lf\n", average(num, a, b,c));//3개일때
	}
	return 0;
}