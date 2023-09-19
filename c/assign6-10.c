//369게임 프로그램
#include<stdio.h>

//3,6,9의 개수를 세는 함수 
int print_369(int n) {
	int c=0;
	for (; n; n /= 10) {
		if ((n % 10 == 3) || (n % 10 == 6) || (n % 10 == 9)) {
			c++;
		}
	}
	return c;
}


int main() {
	int N, num, count;

	printf("Enter a number.\n");
	scanf("%d", &N);
	for (num=1;num<=N;num++) {
		count = print_369(num);
		
		//3,6,9의 개수가 0개면 숫자 그대로 출력
		if (count == 0) {
			printf("%d ", num);
		}
		//3,6,9가 포함되어 있으면 개수만큼 ! 표시
		else {
			for (; count > 0; count--) {
				printf("! ");
			}
		}
	 }
	return 0;
}