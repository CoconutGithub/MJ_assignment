//이 프로그램은 점과 점 사이의 거리를 구하기 위한 프로그램이다.

#include<stdio.h>
#include<math.h>

//좌표에서 좌표를 빼고 그 값의 제곱을 구하는 함수.
double square(double a, double b) {
	double minus;
	minus = a - b;
	return minus*minus;
}

int main() {
	double x1, x2, y1, y2, distance;

	printf("Enter the coordintes of point p.\n");
	scanf("%lf %lf", &x1, &y1);        //첫 번째 점의 좌표를 입력
	printf("Enter the coordintes of point q.\n");
	scanf("%lf %lf", &x2, &y2);        //두 번째 점의 좌표를 입력
	
	distance = sqrt(square(x1, x2) + square(y1, y2)); //두 점 사이의 거리를 구하는 식
	
	printf("Distance between the points is %lf", distance);

	return 0;
}