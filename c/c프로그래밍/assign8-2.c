#include<stdio.h>
//�ּҰ��� �ִ밪�� ���������� ����
int min, max;
//�ִ� �ּ� ���� ���ϴ� �Լ�
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