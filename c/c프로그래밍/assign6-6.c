//���忡�� in���� ã�� ���α׷�
#include<stdio.h>

int main() {
	int ch, in_count = 0, state = 0;

	printf("Enter a sentence.\n");
	for (ch = getchar(); ch != '\n'; ch = getchar()) {
		
		switch (state) {
		//������ ������ 1�� �ٲ�
		case 0:
			if (ch == ' ') {
				state = 1;
				break;
			}
			state = 0;
			break;
		//i�� ������ 2�� �ٲ�
		case 1:
			if (ch == 'i') {
				state = 2;
				break;
			}
			state = 0;
			break;
		//n�� ������ 3���� �ٲ�
		case 2:
			if (ch == 'n') {
				state = 3;
				break;
			}
			state = 0;
			break;
		//������ ������ in������ �ø��� �ݺ�
		case 3:
			if (ch == ' ') {
				state = 0;
				in_count++;
				break;
			}
			state = 0;
			break;
		} 
	}
	printf("The preposition 'in' appears %d times.",in_count);

	return 0;
}
