#include<stdio.h>
#include<stdarg.h>

//����� ���ϴ� �Լ�
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
	scanf("%d", &num);//�Է¹޴� ������ ������ ����
	if (num == 2) {//�Է¹޴� ������ ������ ���� ��츦 ����
		printf("Enter two integers.\n");
		scanf("%d %d", &a, &b);
		printf("Average value is %lf\n", average(num, a, b));//2���϶�
	}
	else {
		printf("Enter three integers.\n");
		scanf("%d %d %d", &a, &b,&c);
		printf("Average value is %lf\n", average(num, a, b,c));//3���϶�
	}
	return 0;
}