#include<stdio.h>

int main() {
	int number, n1, n2, n3;
	
	printf("Enter a natural number.\n");
	scanf("%d", &number);

	n1 = (number % 5) == 0 || (number % 6) == 0;
	
	printf("%d\n", n1);

	n2 = (number % 5) == 0 && (number % 6) == 0;

	printf("%d\n", n2);

	n3 = (number % 5) != 0 && (number % 6) != 0;

	printf("%d", n3);

	return 0;
}