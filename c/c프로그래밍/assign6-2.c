//수를 받아서 그 자릿수 만큼 9 더하는 프로그램
#include<stdio.h>

int main() {
	int num, term, nine=0,sum = 0;

	printf("Enter the number of terms.\n");
	scanf("%d", &term);


	for (num = 1; num <= term; num++) {
		sum += nine * 10 + 9;//합 구하기
		nine= nine * 10 + 9;//더할 9의 수 만들기
	}
		
	printf("The sum is %d",sum);

	return 0;
}