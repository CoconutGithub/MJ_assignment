//홀수인지 짝수인지 구별하는 프로그램

#include<stdio.h>

void odd_even(int integer) {
	if (integer & 1)//홀수라면 1로나와서 참
		printf("It is an odd number.");
	else//아니라면 짝수
		printf("It is an even number.");
}

int main() {
	int integer;
	
	printf("Enter an integer.\n");
	scanf("%d", &integer);
	odd_even(integer);//함수 불러오기
	
	return 0;
}