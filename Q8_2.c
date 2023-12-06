#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define SIZE 10
#define SIZE2 19

void createString(char str1[], char str2[], char com[]);
void str_into_new(char str1[], char str2[], char com[]);

void main()
{
	char str1[SIZE];
	char str2[SIZE];
	char com[SIZE2];

	printf("Insert first string:\n");
	scanf("%s", str1);
	printf("Insert second string:\n");
	scanf("%s", str2);
	createString(str1, str2, com);
	printf("New string is: \n");
	printf("%s\n", com);

}

void createString(char str1[], char str2[], char com[])
{
	int cmp = strcmp(str1, str2);
	int str_long = strlen(str1);
	if (cmp == 0)
	{
		int i, j = 0;
		for (i = 0, j = str_long - 1; j >= 0; i++, j--)
		{
			com[i] = str1[j];
		}
		com[i] = '\0';
	}
	else if (cmp < 0)
	{
		str_into_new(str1, str2, com);
	}
	else if (cmp > 0)
	{
		str_into_new(str2, str1, com);
	}
	return 0;
}

void str_into_new(char str1[], char str2[], char com[])
{
	int str_long = strlen(str1);
	int i, j = 0;
	int oppertaor = str_long;
	for (i = 0, j = str_long - 1; j >= 0; i++, j--)
	{
		com[i] = str2[j];
	}
	for (int v = 0; v < str_long; v++)
	{
		if (str1[v] == str2[0])
		{
			oppertaor = v;
		}
	}
	for (int a = oppertaor - 1; a >= 0; a--)
	{
		com[i] = str1[a];
		i++;
	}
	com[i] = '\0';
	return 0;
}
