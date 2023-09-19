//���� ���� �ε��Ҽ� ����� ���� �з��� ���α׷�

#include<stdio.h>

//��������
void int_calculate(int op1, char op, int op2) {
	switch (op) {
	case '+':
		printf("%d + %d = %d.\n", op1, op2, op1 + op2);
		break;
	case '-':
		printf("%d - %d = %d.\n", op1, op2, op1 - op2);
		break;
	case '*':
		printf("%d * %d = %d.\n", op1, op2, op1 * op2);
		break;
	case '/':
		printf("%d / %d = %d.\n", op1, op2, op1 / op2);
		break;
	case '%':
		printf("%d %% %d = %d.\n", op1, op2, op1 % op2);
		break;
	default:
		printf("Not an allowable operator.\n");
		break;
	}
}

//�ε��Ҽ� ����
void float_calculate(double op3, char op, double op4) {
	switch (op) {
	case '+':
		printf("%.3f + %.3f = %.3f.\n", op3, op4, op3 + op4);
		break;
	case '-':
		printf("%.3f - %.3f = %.3f.\n", op3, op4, op3 - op4);
		break;
	case '*':
		printf("%.3f * %.3f = %.3f.\n", op3, op4, op3 * op4);
		break;
	case '/':
		printf("%.3f / %.3f = %.3f.\n", op3, op4, op3 / op4);
		break;
	default:
		printf("Not an allowable operator.\n");
		break;
	}
}
//���� ���� ����
void calculate(num) {
	char op; int op1, op2; double op3, op4;
	switch (num) {
	case 2:
		printf("Enter an expression. For EXAMPLE, 2 + 5.\n");
		scanf("%d %c %d", &op1, &op, &op2);
		int_calculate(op1, op, op2);
		break;
	case 1:
		printf("Enter an expression. For EXAMPLE, 2.20 + 3.30.\n");
		scanf("%lf %c %lf", &op3, &op, &op4);
		float_calculate(op3, op, op4);
		break;
	}
}
int main() {
	int num;

	printf("Enter 1 for floating point calculation, 2 for integer calculation.\n");
	scanf("%d", &num);
	calculate(num);
	
	
	return 0;
}