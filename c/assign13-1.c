#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct site
{
	char* name;//������ �̸�
	char rating;//������ ���� A,B,C�� ������ �ű�
};
int main()
{
	int i; char temp[100];
	struct site* sites[3];

	for (i = 0; i < 3; i++)
	{
		sites[i] = (struct site*)malloc(sizeof(struct site));
		
		if (sites[i] == NULL)
			exit(1);//���׽�Ʈ
		
		printf("Enter name of tour site.\n");
		gets(temp);//�ϴ� �߰� �迭�� �������̸��� ����

		sites[i]->name = (char*)malloc(sizeof(char) * (strlen(temp) + 1));//������ �̸� ���̿� ���� �迭���� �ο�
		strcpy(sites[i]->name, temp);//������ �̸� �迭�� ������ �ֱ�
		if (sites[i]->name == NULL)
			exit(1);//���׽�Ʈ
		
		printf("Enter rating of the tour site.\n");
		scanf("%c", &sites[i]->rating);//���� �ű��
	

		while (getchar() != '\n');//���� Ŭ����
	}
	for (i = 0; i < 3; i++)
		printf("%s %c\n", sites[i]->name, sites[i]->rating);//�ϳ��� ���

	return 0;
}