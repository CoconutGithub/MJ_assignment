//세 실수를 입력 받아 표준편차를 구하는 프로그램

#include<stdio.h>
#include<math.h>

//세 수의 평균을 구하는 함수
double average(double a, double b, double c) {
	return (a + b + c) / 3;
}

//변이를 구하는 함수
double std_deviation(double a, double b, double c) {
	double average_value = average(a, b, c);
	return ((average_value - a) * (average_value - a) + (average_value - b) * (average_value - b) + (average_value - c) * (average_value - c)) / 3;

}

int main() {
	
	double a, b, c, std_devi ;
	
	printf("Enter a three real number.\n");
	scanf("%lf %lf %lf",&a,&b,&c);//세 실수를 입력
	
	std_devi = sqrt(std_deviation(a, b, c));//변이를 구하는 함수를 호출 후 루트를 씌워 표준편차를 구함
	
	printf("The standard deviation is %lf", std_devi);
	
	return 0;

}