#include<stdio.h>

int main() {
	int ch, in_count = 0, state = 0;

	printf("Enter a sentence.\n");
	for (ch = getchar(); ch != '\n'; ch = getchar()) {

		switch (state) {
		case 0:
			if (ch == ' ') {
				state = 1;
				break;
			}
			
			else if (ch == 'I') {
				state = 2;
				break;
			}
			state = 0;
			break;

		case 1:
			if (ch == 'i') {
				state = 2;
				break;
			}
			state = 0;
			break;

		case 2:
			if (ch == 'n') {
				state = 3;
				break;
			}
			state = 0;
			break;

		case 3:
			if (ch == ' '||ch=='.') {
				state = 0;
				in_count++;
				break;
			}
			state = 0;
			break;
		}
	}
	printf("It appears exactly %d times.", in_count);

	return 0;
}
//In banks, bin means bank id number in accepting in.