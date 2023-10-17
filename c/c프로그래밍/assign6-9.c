//2진수를 10진수로 변환하는 프로그램
#include<stdio.h>
#include<math.h>

//합계구하는 함수
int sum_value(long long b) {
	int s=0, d;
	for (d = 0; b; d++) {
		s += (b % 10) * pow(2, d);
		b /= 10;
	}
	return s;
}

int main() {
	long long binary; int  sum=0;
	printf("Enter a binary number.\n");
	scanf("%lld", &binary);
	
	sum=sum_value(binary);//함수 대입
	
	printf("The decimal value of binary %lld is %d", binary, sum);

}
