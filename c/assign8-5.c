#include<stdio.h>

//하노이 타워를 푸는 방법
void move(int n, char x, char y, char z) {
	if (n == 1) {//1개일 경우 x에서 y로 옮기고 끝낸다.
		printf("move a disk from %c to %c.\n", x, y);
	}
	else {
		move(n - 1, x, z, y);//n-1개의 블럭을 x에서 z로 이동
		printf("move a disk from %c to %c.\n", x, y);
		move(n - 1, z, y, x);//n-1개의 블럭을 z에서 y로 이동
	}
}
int main() {
	int num; 
	printf("Enter the number of disks.\n");
	scanf("%d", &num);
	move(num, 'X', 'Y', 'Z');//재귀함수 호출
	
	return 0;
}