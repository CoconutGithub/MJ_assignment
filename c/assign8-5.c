#include<stdio.h>

//�ϳ��� Ÿ���� Ǫ�� ���
void move(int n, char x, char y, char z) {
	if (n == 1) {//1���� ��� x���� y�� �ű�� ������.
		printf("move a disk from %c to %c.\n", x, y);
	}
	else {
		move(n - 1, x, z, y);//n-1���� ���� x���� z�� �̵�
		printf("move a disk from %c to %c.\n", x, y);
		move(n - 1, z, y, x);//n-1���� ���� z���� y�� �̵�
	}
}
int main() {
	int num; 
	printf("Enter the number of disks.\n");
	scanf("%d", &num);
	move(num, 'X', 'Y', 'Z');//����Լ� ȣ��
	
	return 0;
}