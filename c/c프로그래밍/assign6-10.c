//369���� ���α׷�
#include<stdio.h>

//3,6,9�� ������ ���� �Լ� 
int print_369(int n) {
	int c=0;
	for (; n; n /= 10) {
		if ((n % 10 == 3) || (n % 10 == 6) || (n % 10 == 9)) {
			c++;
		}
	}
	return c;
}


int main() {
	int N, num, count;

	printf("Enter a number.\n");
	scanf("%d", &N);
	for (num=1;num<=N;num++) {
		count = print_369(num);
		
		//3,6,9�� ������ 0���� ���� �״�� ���
		if (count == 0) {
			printf("%d ", num);
		}
		//3,6,9�� ���ԵǾ� ������ ������ŭ ! ǥ��
		else {
			for (; count > 0; count--) {
				printf("! ");
			}
		}
	 }
	return 0;
}