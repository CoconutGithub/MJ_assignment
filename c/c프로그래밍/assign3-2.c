#include<stdio.h>

int main() {
	int int1, int2, int3;
	double int4;
	
	
	printf("Enter three integers.\n");
	scanf("%d %d %d", &int1, &int2, &int3);
	int4 = (int1 + int2 + int3) / 3.0;
	printf("The average of %d, %d, %d is %.3f", int1, int2, int3, int4);

	return 0;

}