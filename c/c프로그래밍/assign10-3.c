#define MAX 200
#include<stdio.h>

//���� ���� �Լ�
void insertion_sort(int arr[], int length);

int main() {
	int temp, i=0, n, integer[MAX];

	printf("Enter input number,\n");

	//������ �Էµɶ����� ���� �ޱ�
	while (1) {
		scanf("%d", &temp);
		if (temp < 0)
			break;
		integer[i++] = temp;
	}
	insertion_sort(integer, i);//�Լ� ȣ��

	printf("After sorting:");

	for (n = 0; n < i; n++)
		printf("%d", integer[n]);//�ε��� ����Ʈ

}

void insertion_sort(int arr[], int length) {
	int current, num, key;
	 for (current = 1; current < length; current++) {
		 key = arr[current];//���� ���Ե� ������ num��° ������ key������ ����
		 
		 for (num= current -1; num >=0&&arr[num] > key; num--)
			arr[num+1] = arr[num];
		 arr[num +1] = key;
	 }
}
