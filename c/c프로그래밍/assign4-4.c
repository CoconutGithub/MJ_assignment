//�� �Ǽ��� �Է� �޾� ǥ�������� ���ϴ� ���α׷�

#include<stdio.h>
#include<math.h>

//�� ���� ����� ���ϴ� �Լ�
double average(double a, double b, double c) {
	return (a + b + c) / 3;
}

//���̸� ���ϴ� �Լ�
double std_deviation(double a, double b, double c) {
	double average_value = average(a, b, c);
	return ((average_value - a) * (average_value - a) + (average_value - b) * (average_value - b) + (average_value - c) * (average_value - c)) / 3;

}

int main() {
	
	double a, b, c, std_devi ;
	
	printf("Enter a three real number.\n");
	scanf("%lf %lf %lf",&a,&b,&c);//�� �Ǽ��� �Է�
	
	std_devi = sqrt(std_deviation(a, b, c));//���̸� ���ϴ� �Լ��� ȣ�� �� ��Ʈ�� ���� ǥ�������� ����
	
	printf("The standard deviation is %lf", std_devi);
	
	return 0;

}