#include<stdio.h>

//�Ҽ����� �Ǻ��ϴ� �Լ�
int is_prime(int n, int half) {
	if (half == 1)//���̽� ���̽�
		return 1;
	
	//half�� ���� �������� ������ half-1�ؼ� 1�� �ɶ� ���� ���
	if (n % half != 0){
		is_prime(n, half - 1);
	}
	else {
		return 0;
	}//�ѹ��̶� ������ �������ٸ� �Ҽ��� �ƴ�
}
int main(){
	int num ;

	printf("Enter the integer.\n");
	scanf("%d", &num);

	if (is_prime(num, num / 2)) {//�Լ��� 1�̸� �Ҽ� �ƴϸ� �Ҽ��� �ƴ�
		printf("%d is the prime number.", num);
	}
	else
		printf("%d is not the prime number.", num);

	return 0;
}