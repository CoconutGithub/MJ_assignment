#include<stdio.h>
//rate�� ���ڷ� �޴� �Լ�
double change_rate(double rate) {
	rate *= 1.1;
	return rate;
}

int main() {
	double rate;
	rate = .2;
	rate = change_rate(rate);//rate�� ���ڷ� ���� �� �ٲ� rate���� �ٽ� �ޱ�
	printf("The modified rate is %lf.\n", rate);
	return 0;
}