#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//quit이 나오기 전까지 단어 입력받은후에 단어들 출력
int main()
{
	char** p = NULL, word[100], * quit = "quit";
	int i, row = 0;

	p = (char**)malloc(sizeof(int) * (row + 1));//2차원배열 설정
	
	while (1)
	{
		printf("Enter a word.\n");
		gets(word);//단어 받기

		p[row] = (char*)malloc(sizeof(char) * (strlen(word) + 1));//행에 따라 포인터 선언
		strcpy(p[row], word);//포인터에 단어 대입

		if (p[row] == NULL)
			exit(1);

		if (strcmp(p[row], quit) == 0)//quit이라는 단어가 들어오면 루프 탈출
			break;

		row++;
		p = (char**)realloc(p,sizeof(char*) * (row + 1));//단어 개수에 따라 행의 개수 늘리기

		if (p == NULL)
			exit(1);
	}
	//단어들 출력
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