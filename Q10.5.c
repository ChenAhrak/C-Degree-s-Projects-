#define _CRT_SECURE_NO_WARNINGS
#define SIZE 40
#include <stdio.h>
#include <string.h>
char* initString();
char* replaceLastWord(char* sentence, char* word);
int findIndex(char* sentence);
char* mergeStr(char* sentence, char* word);

void main() {
	char* sentence = initString();
	char* word = initString();
	char* newWord = replaceLastWord(sentence, word);
	printf("new Sentence is :*%s*", newWord);
	free(sentence); free(word); free(newWord);
}

char* initString()
{
	char str[SIZE];
	char* newStr;
	int newSize = 0,newIndex=0;
	puts("Enter a char:");
    gets(str);
	char* original1 = str;
	char* original2= str;
    while(*original1)
	{
		newSize++;
		original1++;
	}
	newStr = (char*)malloc(newSize+1 * sizeof(char));
	if (newStr != NULL)
	{
		while (*original2)
		{
			newStr[newIndex] = *original2;
			original2++;
			newIndex++;
		}
		newStr[newIndex] = '\0';
	}
	return newStr;
}

int findIndex(char* sentence)
{
	char* ptr=sentence+ strlen(sentence) - 1;
	int i = strlen(sentence) - 1;
	while (*ptr != ' ')
	{
		i--;
		ptr--;
	}
	return i;
}

char* replaceLastWord(char* sentence, char* word)
{
	char* mStr = mergeStr(sentence, word);
	char* newStr = (char*)malloc(strlen(mStr) + 1 * sizeof(char));
	if (!newStr)
	{
		printf("Memory not aloocated.\n");
		exit(0);
	}
	else
	{
		strcpy(newStr, mStr);
		return newStr;
	}
}
	

char* mergeStr(char* sentence, char* word)
{
	char* mStr = sentence;
	int index = findIndex(sentence);
	sentence += index + 1;
	strcpy(sentence, word);
	return mStr;

}