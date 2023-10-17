//5의 배수를 뺀 수의 합을 구하는 프로그램
#include<stdio.h>

int main() {
	int max, num, sum=0;

	printf("Enter a natural number.\n");
	scanf("%d", &max);

	for (num = 1; num <= max; num++) {
		if (num % 5 == 0)
			continue;//num이 5의 배수라면 더하지 말고 넘어가라
		sum += num;
	}
	printf("The sum is %d", sum);

	return 0;
}