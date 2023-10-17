//문장에서 in개수 찾는 프로그램
#include<stdio.h>

int main() {
	int ch, in_count = 0, state = 0;

	printf("Enter a sentence.\n");
	for (ch = getchar(); ch != '\n'; ch = getchar()) {
		
		switch (state) {
		//공백을 만나면 1로 바꿈
		case 0:
			if (ch == ' ') {
				state = 1;
				break;
			}
			state = 0;
			break;
		//i를 만나면 2로 바꿈
		case 1:
			if (ch == 'i') {
				state = 2;
				break;
			}
			state = 0;
			break;
		//n을 만나면 3으로 바꿈
		case 2:
			if (ch == 'n') {
				state = 3;
				break;
			}
			state = 0;
			break;
		//공백을 만나면 in개수를 올리고 반복
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
