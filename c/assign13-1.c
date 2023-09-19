#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct site
{
	char* name;//관광지 이름
	char rating;//관광지 점수 A,B,C로 점수를 매김
};
int main()
{
	int i; char temp[100];
	struct site* sites[3];

	for (i = 0; i < 3; i++)
	{
		sites[i] = (struct site*)malloc(sizeof(struct site));
		
		if (sites[i] == NULL)
			exit(1);//널테스트
		
		printf("Enter name of tour site.\n");
		gets(temp);//일단 중간 배열에 관광지이름을 받음

		sites[i]->name = (char*)malloc(sizeof(char) * (strlen(temp) + 1));//관광지 이름 길이에 따른 배열길이 부여
		strcpy(sites[i]->name, temp);//관광지 이름 배열에 복사해 넣기
		if (sites[i]->name == NULL)
			exit(1);//널테스트
		
		printf("Enter rating of the tour site.\n");
		scanf("%c", &sites[i]->rating);//점수 매기기
	

		while (getchar() != '\n');//버퍼 클리어
	}
	for (i = 0; i < 3; i++)
		printf("%s %c\n", sites[i]->name, sites[i]->rating);//하나씩 출력

	return 0;
}