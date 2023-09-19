#include<stdio.h>

int main() {
	int sec, min, hour;
	
	printf("Enter seconds.\n");
	scanf("%d", &sec);
	
	min = sec / 60;
	hour = min / 60;
	min = min % 60;
	sec = sec % 60;

	printf("It is %dhours, %dminutes, %dseconds.", hour, min, sec);

	return 0;

}