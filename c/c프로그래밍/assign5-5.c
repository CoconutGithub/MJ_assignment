//윤년구하는 프로그램

#include<stdio.h>


//윤년 구하는 함수
int leap_year(int y) {
	if (!(y % 4) && y % 100 || !(y % 4) && !(y % 400))
		printf("It is a leap year.");
	else
		printf("It is not a leap year.");
}

int main() {
	int year;
	
	printf("Enter year.\n");
	scanf("%d", &year);
	leap_year(year);
	
	return 0;
}