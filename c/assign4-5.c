//실수를 받아서 반올림한 값을 출력하는 프로그램

#include<stdio.h>
#include<math.h>

//반올림한 결과를 구하는 함수
double round_up(double n) {
	return floor(n + 0.5);
}

int main() {
	double round_up_value , n;
	
	printf("Enter the positive real number.\n");
	scanf("%lf", &n);
	
	round_up_value = round_up(n);//반올림한 변수 대입
	
	printf("The round up value is %d.", (int)round_up_value);//double값을 int값으로 강제 형변환
	return 0;

}