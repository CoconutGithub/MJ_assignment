//2������ 10������ ��ȯ�ϴ� ���α׷�
#include<stdio.h>
#include<math.h>

//�հ豸�ϴ� �Լ�
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
	
	sum=sum_value(binary);//�Լ� ����
	
	printf("The decimal value of binary %lld is %d", binary, sum);

}
