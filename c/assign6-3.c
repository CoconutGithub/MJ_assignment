//���� ���ڸ� ǥ���ϴ� ���α׷�
#include<stdio.h>


int main() {
	int max,num,star,blank;
	
	scanf("%d", &max);//��� ���ڰ� ���� ǥ������ ��ĵ

	//ó�� ���� �ﰢ�������
	for (num = 0; num < max; num++) {
		for (star = 0; star<= num; star++) {
			printf("*");
		}
		printf("\n");
	}
	//���ڷ� �ﰢ�������
	for (num = 1; num <= max; num++) {
		for (star = 1; star <= num; star++) {
			printf("%d",star);
		}
		printf("\n");
	}
	//���� �Ƕ�̵� �����
	for (num = 1; num < max-1; num++) {
		for (blank = max-2; blank > num; blank--) {
			printf(" ");
		}
		for (star = 1; star < 2*num; star++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}