#include<stdio.h>

char mutually_prime(int a, int b) {
	int i, smaller; char n, y;
	smaller = a > b ? b : a;
	for (i = 2; a == b == -1; i++) {
		if (a % i == 0 && b % i == 0) {
			printf("No, they are not mutually prime.\n");
			return n;
		}
		else {
			printf("Yes, they are mutually prime.\n");
			return y;
		}
	}
}
int main() {
	int a, b;
	printf("Enter two numbers.\n");
	scanf("%d %d", &a, &b);
	mutually_prime(a, b);
	return 0;
}