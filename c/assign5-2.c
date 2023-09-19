//좌표를 받아서 사분면 위치 구하는 프로그램

#include<stdio.h>

//좌표에 따라 사분면 출력
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