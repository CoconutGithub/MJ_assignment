#include<stdio.h>
int main() {
	int Celcius, Fahrenheit;
	
		printf("Enter degrees in Celcius.\n");
		scanf("%d", &Celcius);
		Fahrenheit = (Celcius*9 / 5) + 32;
		printf("%d degrees in Celcius is %d degrees in Fahrenheit", Celcius, Fahrenheit);
		return 0;
}