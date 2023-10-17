#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char ch, * str, * ptr, integers[100];
	int i=0, j;
	int *arr;

	printf("Enter one or more integers.\n");
	
	str = (char*)malloc(sizeof(char) * (i + 1));
	*str = NULL;

	for (i = 0; (ch = getchar()) != '\n'; i++)
	{
		str = (char*)realloc(str, sizeof(char) * (i + 1));
		gets(integers);
		strcpy(str[i], integers);
	}
	
	i++;
	str[i] = " ";
	i++;
	str[i] = "\n";

	ptr = (char*)malloc(sizeof(char));
	ptr = strtok(str, " ");
	for(;strtok!=NULL;)
		ptr = strtok(str, " ");
	
	ptr = str;
	arr = NULL;

	arr = (int*)malloc(sizeof(int));

	for (i = 0; *ptr != '\n'; i++)
	{
		arr = (int*)realloc(arr, sizeof(int) * (i + 1));
		arr[i] = atoi(ptr);
		while(*ptr !='\0')
			ptr = strtok(str, " ");
		ptr++;
	}
	for (j = 0; j < i; j++) 
	{
		printf("%d", arr[j]);
	}
	printf("\n");

	free(str);
	free(ptr);
	free(arr);


	return 0;
}
