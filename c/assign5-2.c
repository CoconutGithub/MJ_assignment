//��ǥ�� �޾Ƽ� ��и� ��ġ ���ϴ� ���α׷�

#include<stdio.h>

//��ǥ�� ���� ��и� ���
void point(int x, int y) {
	if (x > 0 && y > 0) 
		printf("It's in the 1st quadrant.");
	else if (x < 0 && y > 0)
		printf("It's in the 2nd quadrant.");
	else if (x < 0 && y < 0) 
		printf("It's in the 3rd quadrant.");
	else if (x > 0 && y < 0) 
		printf("It's in the 4th quadrant.");
	
}

int main() {
	int x, y;
	
	printf("Enter the x, y coordinates of the point.\n");
	scanf("%d %d", &x, &y);
	
	point(x, y);
	
	return 0;
}