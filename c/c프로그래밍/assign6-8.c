//���̵� ���� ���α׷�
#include <stdio.h>

int main() {
	int i = 0;//�ڸ���
	int has_number = 0;//������ ����
	printf("Enter an identifier.\n");
	for (char ch = getchar(); ch != '\n'; scanf("%c", &ch)) {
		i++;
		//ù��° ���ڰ� ���� �ҹ������� �Ǻ�
		if (i == 1) {
			if (ch < 'a' || ch>'z') {
				printf("It's illegal ID.");
				has_number = 0;
				break;
			}
		}
		//8�ڸ��� �Ѿ���� �Ǻ�
		else if (i > 8) {
			printf("It's illegal ID.");
			has_number = 0;
			break;
		}
		//������ ���� �Ǻ�
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