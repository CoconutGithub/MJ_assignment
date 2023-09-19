#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i; char ch, * temp;
	char** p = (char**)malloc(2 * sizeof(char*));//p�� �ΰ��� �迭�� ����

	p[1] = p[0] = NULL;

	printf("Enter first string.\n");

	for (i = 0; (ch = getchar()) != '\n'; i++) 
	{
		p[0] = (char*)realloc(p[0], (i + 1) * sizeof(char));//�����ϳ��� ���������� �迭 ������ �ϳ��� �ø�
		
		*(p[0] + i) = ch;//���ڸ� �ϳ��� �迭�� ����
		
		if (p[0] == NULL)//���� null���̸� ����
			exit(1);
	}
	*(p[0] + i) = '\0';//������ �������� '\0'�� �־���
	
	printf("Enter second string.\n");
	for (i = 0; (ch = getchar()) != '\n'; i++)
	{	
		p[1] = (char*)realloc(p[1], (i + 1) * sizeof(char));//�����ϳ��� ���������� �迭 ������ �ϳ��� �ø�
		
		*(p[1] + i) = ch;//���ڸ� �ϳ��� �迭�� ����
		
		if (p[1] == NULL)//���� null���̸� ����
			exit(1);
	}
	*(p[1] + i) = '\0';//������ �������� '\0'�� �־���
	
	//�� �迭�� ����
	temp = p[0];
	p[0] = p[1];
	p[1] = temp;

	printf("first string became %s, second string became %s.", p[0], p[1]);//�ٲ� �� �迭 ���
	
	//�迭 �ϳ��� ����
	free(p);
	free(p[0]);
	free(p[1]);
	
	return 0;
}