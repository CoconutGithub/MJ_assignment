#define MAX 200
#include<stdio.h>

//삽입 정렬 함수
void insertion_sort(int arr[], int length);

int main() {
	int temp, i=0, n, integer[MAX];

	printf("Enter input number,\n");

	//음수가 입력될때까지 정수 받기
	while (1) {
		scanf("%d", &temp);
		if (temp < 0)
			break;
		integer[i++] = temp;
	}
	insertion_sort(integer, i);//함수 호출

	printf("After sorting:");

	for (n = 0; n < i; n++)
		printf("%d", integer[n]);//인덱스 프린트

}

void insertion_sort(int arr[], int length) {
	int current, num, key;
	 for (current = 1; current < length; current++) {
		 key = arr[current];//현재 삽입될 숫자인 num번째 정수를 key변수로 복사
		 
		 for (num= current -1; num >=0&&arr[num] > key; num--)
			arr[num+1] = arr[num];
		 arr[num +1] = key;
	 }
}
