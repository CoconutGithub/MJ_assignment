//���� �Ųٷ� ����ϴ� ���α׷�
#include<stdio.h>

//���� ����� ����ϴ� �Լ�
void reverse_it(int n) {
	for (; n; n /= 10) {
		printf("%d", n % 10);
	}
}

int main() {
	int num;
	
	//���ѷ���
	for (;;) {
		printf("\nEnter a natural number.\n");
		scanf("%d", &num);
		
		//���� ������ ����� ���
		if (num > 0) {
			reverse_it(num);
		}
		//0�Ǵ� ���������� ���ѷ��� Ż��
		else {
			break;
		}
	}
	return 0;
}