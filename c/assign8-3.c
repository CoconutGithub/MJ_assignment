#include<stdio.h>
//min이 n보다 작다면 그대로 두고 크다면 n을 min에 대입
int current_min(int n) {
	static int min=100;
	if (min > n)
		min = n;
	printf("Current min is %d.\n", min);
}

//음의 정수가 입력되기 전까지 무한루프를 돌리며 최소값을 계산
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