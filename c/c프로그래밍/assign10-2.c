#include<stdio.h>

void swap(int* p, int* q);//두개의 값을 바꿔주는 함수

void bubble_sort(int arr[], int length);//배열을 오름차순으로 바꿔주는 함수

int binary_search(int arr[], int length, int value, int first, int last) ;//원하는 수가 몇번째 인덱스에 있는지 알려주는 함수

int main() {
	int i, temp, integer[12], value, first, last;
	printf("Enter twelve integers.\n");
	
	//12개의 숫자 입력받기
	for (i=0;i<12;i++) {
		scanf("%d", &temp);
		integer[i] = temp;
	}
	bubble_sort(integer, i);
	
	first = 1;//범위의 첫번째 
	last = i;//범위의 마지막

	printf("Enter data to be searched.\n");
	scanf("%d", &value);

	binary_search(integer, i, value, first, last);
	
	return 0;
}
void swap(int* p, int* q) {
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
void bubble_sort(int arr[], int length) {
	int pass, current, sorted = 0;

	for (pass = 1; (pass < length) && (!sorted); pass++) {
		sorted = 1;
		for (current = 0; current < (length - pass); current++) {
			if (arr[current] > arr[current + 1]) {
				swap(&arr[current], &arr[current + 1]);
				sorted = 0;
			}
		}
	}
}
int binary_search(int arr[], int length, int value, int first, int last) {
	int middle;
	middle = (first + last) / 2;
	for (; first <= last;) {
		if (value < arr[middle]) {
			last = middle - 1;
			binary_search(arr, last, value, first, last);
		}
		else if (value > arr[middle]) {
			first = middle + 1;
			binary_search(arr, last - middle, value, first, last);
		}
		else {
			printf("It is in index %d.", middle);
			return 1;
		
		}
		break;
	}
	if (first > last) 
		printf("No such data.");
}