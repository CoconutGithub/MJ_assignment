#include<stdio.h>
//min�� n���� �۴ٸ� �״�� �ΰ� ũ�ٸ� n�� min�� ����
int current_min(int n) {
	static int min=100;
	if (min > n)
		min = n;
	printf("Current min is %d.\n", min);
}

//���� ������ �ԷµǱ� ������ ���ѷ����� ������ �ּҰ��� ���
int main() {
	int num;
	for (;;) {
		printf("Enter a number.\n");
		scanf("%d", &num);
		if (num >= 0)
			current_min(num);
		else
			break;
		
	}
	return 0;
}