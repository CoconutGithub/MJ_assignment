//�� ���α׷��� ���� �� ������ �Ÿ��� ���ϱ� ���� ���α׷��̴�.

#include<stdio.h>
#include<math.h>

//��ǥ���� ��ǥ�� ���� �� ���� ������ ���ϴ� �Լ�.
double square(double a, double b) {
	double minus;
	minus = a - b;
	return minus*minus;
}

int main() {
	double x1, x2, y1, y2, distance;

	printf("Enter the coordintes of point p.\n");
	scanf("%lf %lf", &x1, &y1);        //ù ��° ���� ��ǥ�� �Է�
	printf("Enter the coordintes of point q.\n");
	scanf("%lf %lf", &x2, &y2);        //�� ��° ���� ��ǥ�� �Է�
	
	distance = sqrt(square(x1, x2) + square(y1, y2)); //�� �� ������ �Ÿ��� ���ϴ� ��
	
	printf("Distance between the points is %lf", distance);

	return 0;
}