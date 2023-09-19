
#include<stdio.h>

int main() {
	int num, term, nine = 0, sum = 0;

	printf("Enter the number of terms.\n");
	scanf("%d", &term);


	for (num = 1; num <= term; num++) {
		sum += nine * 10 + 9;
		nine = nine * 10 + 9;
	}

	printf("The sum is %d", sum);

	return 0;
}