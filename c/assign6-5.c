//숫자 거꾸로 출력하는 프로그램
#include<stdio.h>

//숫자 뒤집어서 출력하는 함수
void reverse_it(int n) {
	for (; n; n /= 10) {
		printf("%d", n % 10);
	}
}

int main() {
	int num;
	
	//무한루프
	for (;;) {
		printf("\nEnter a natural number.\n");
		scanf("%d", &num);
		
		//양의 정수면 뒤집어서 출력
		if (num > 0) {
			reverse_it(num);
		}
		//0또는 음의정수면 무한루프 탈출
		else {
			break;
		}
	}
	return 0;
}