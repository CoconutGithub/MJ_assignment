#include<stdio.h>
#include<math.h>

int my_power(int a,int b) {
	int power;
	power = (int)pow(a, b);
	return power;
}

int main() {
	int a=0, b=0, num;
	for (;;) {
		printf("\nEnter numbers.\n");
		scanf("%d %d", &a, &b);
		if (!(a == -1 && b == -1)) {
			num = my_power(a, b);
			printf("%d power %d is %d", a, b, num);
		}
		else
			break;
		
	}
}