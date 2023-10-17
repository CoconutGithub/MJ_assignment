//별과 숫자를 표시하는 프로그램
#include<stdio.h>


int main() {
	int max,num,star,blank;
	
	scanf("%d", &max);//몇개의 숫자과 별을 표기할지 스캔

	//처음 별로 삼각형만들기
	for (num = 0; num < max; num++) {
		for (star = 0; star<= num; star++) {
			printf("*");
		}
		printf("\n");
	}
	//숫자로 삼각형만들기
	for (num = 1; num <= max; num++) {
		for (star = 1; star <= num; star++) {
			printf("%d",star);
		}
		printf("\n");
	}
	//별로 피라미드 만들기
	for (num = 1; num < max-1; num++) {
		for (blank = max-2; blank > num; blank--) {
			printf(" ");
		}
		for (star = 1; star < 2*num; star++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}