//�Ǽ��� �޾Ƽ� �ݿø��� ���� ����ϴ� ���α׷�

#include<stdio.h>
#include<math.h>

//�ݿø��� ����� ���ϴ� �Լ�
double round_up(double n) {
	return floor(n + 0.5);
}

int main() {
	double round_up_value , n;
	
	printf("Enter the positive real number.\n");
	scanf("%lf", &n);
	
	round_up_value = round_up(n);//�ݿø��� ���� ����
	
	printf("The round up value is %d.", (int)round_up_value);//double���� int������ ���� ����ȯ
	return 0;

}