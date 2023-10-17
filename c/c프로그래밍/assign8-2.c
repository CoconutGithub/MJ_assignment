#include<stdio.h>
//최소값과 최대값을 전역변수로 설정
int min, max;
//최대 최소 값을 구하는 함수
void min_max(int a, int b, int c) {
	min = a;
	if (min > b)
		min = b;
	if (min > c)
		min = c;
	max = a;
	if (max < b)
		max = b;
	if (max < c)
		max = c;
}
int main() {
	int a, b, c;
	printf("Enter three integers.\n");
	scanf("%d %d %d", &a, &b, &c);
	
	min_max(a, b, c);
	
	printf("min is %d, max is %d.", min, max);
	
	return 0;
}