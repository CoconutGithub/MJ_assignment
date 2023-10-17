//아이디 생성 프로그램
#include <stdio.h>

int main() {
	int i = 0;//자릿수
	int has_number = 0;//숫자의 유무
	printf("Enter an identifier.\n");
	for (char ch = getchar(); ch != '\n'; scanf("%c", &ch)) {
		i++;
		//첫번째 문자가 영어 소문자인지 판별
		if (i == 1) {
			if (ch < 'a' || ch>'z') {
				printf("It's illegal ID.");
				has_number = 0;
				break;
			}
		}
		//8자리를 넘어가는지 판별
		else if (i > 8) {
			printf("It's illegal ID.");
			has_number = 0;
			break;
		}
		//숫자의 유뮤 판별
		else if (i <= 8) {
			if (ch >= 49 && ch <= 58) {
				has_number = 1;
			}
		}
	}
	if (has_number == 1) {
		printf("It's legal ID.");
	}

	return 0;
}