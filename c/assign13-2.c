#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct
{
	char word[20];
	char meaning[100];

}wordType;
typedef struct
{
	wordType dict[5000];
	int count;
}dictType;
char* search(char* w, dictType* d)
{
	int i;
	for (i = 0; i < dictType.count; i++)
	{
		if (strcmp(w, wordType.meaning) == 0)
			return wordType.meaning;
	}
	return NULL;
}
void insurt(char* w, char* m, dictType* d)
{

}