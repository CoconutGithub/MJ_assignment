#include<stdio.h>

//소수인지 판별하는 함수
int is_prime(int n, int half) {
	if (half == 1)//베이스 케이스
		return 1;
	
	//half로 나눠 떨어지지 않으면 half-1해서 1이 될때 까지 재귀
	if (n % half != 0){
		is_prime(n, half - 1);
	}
	else {
		return 0;
	}//한번이라도 나누어 떨어진다면 소수가 아님
}
int main(){
	int num ;

	printf("Enter the integer.\n");
	scanf("%d", &num);

	if (is_prime(num, num / 2)) {//함수가 1이면 소수 아니면 소수가 아님
		printf("%d is the prime number.", num);
	}
	else
		printf("%d is not the prime number.", num);

	return 0;
}