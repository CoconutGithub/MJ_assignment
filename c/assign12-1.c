#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//quit�� ������ ������ �ܾ� �Է¹����Ŀ� �ܾ�� ���
int main()
{
	char** p = NULL, word[100], * quit = "quit";
	int i, row = 0;

	p = (char**)malloc(sizeof(int) * (row + 1));//2�����迭 ����
	
	while (1)
	{
		printf("Enter a word.\n");
		gets(word);//�ܾ� �ޱ�

		p[row] = (char*)malloc(sizeof(char) * (strlen(word) + 1));//�࿡ ���� ������ ����
		strcpy(p[row], word);//�����Ϳ� �ܾ� ����

		if (p[row] == NULL)
			exit(1);

		if (strcmp(p[row], quit) == 0)//quit�̶�� �ܾ ������ ���� Ż��
			break;

		row++;
		p = (char**)realloc(p,sizeof(char*) * (row + 1));//�ܾ� ������ ���� ���� ���� �ø���

		if (p == NULL)
			exit(1);
	}
	//�ܾ�� ���
	for(i = 0;i < row; i++)
	{
		printf("%s\n", p[i]);
	}
	for (i = 0; i < row; i++)
	{
		free(p[i]);
	}
	free(p);

	return 0;
}