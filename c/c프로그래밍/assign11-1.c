#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i; char ch, * temp;
	char** p = (char**)malloc(2 * sizeof(char*));//p를 두개의 배열로 만듦

	p[1] = p[0] = NULL;

	printf("Enter first string.\n");

	for (i = 0; (ch = getchar()) != '\n'; i++) 
	{
		p[0] = (char*)realloc(p[0], (i + 1) * sizeof(char));//문자하나를 받을때마다 배열 개수를 하나씩 늘림
		
		*(p[0] + i) = ch;//문자를 하나씩 배열에 넣음
		
		if (p[0] == NULL)//만약 null값이면 종료
			exit(1);
	}
	*(p[0] + i) = '\0';//문장의 마지막에 '\0'을 넣어줌
	
	printf("Enter second string.\n");
	for (i = 0; (ch = getchar()) != '\n'; i++)
	{	
		p[1] = (char*)realloc(p[1], (i + 1) * sizeof(char));//문자하나를 받을때마다 배열 개수를 하나씩 늘림
		
		*(p[1] + i) = ch;//문자를 하나씩 배열에 넣음
		
		if (p[1] == NULL)//만약 null값이면 종료
			exit(1);
	}
	*(p[1] + i) = '\0';//문장의 마지막에 '\0'을 넣어줌
	
	//두 배열을 스왑
	temp = p[0];
	p[0] = p[1];
	p[1] = temp;

	printf("first string became %s, second string became %s.", p[0], p[1]);//바꾼 두 배열 출력
	
	//배열 하나식 해제
	free(p);
	free(p[0]);
	free(p[1]);
	
	return 0;
}