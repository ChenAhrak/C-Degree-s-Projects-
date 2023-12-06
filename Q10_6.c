#define _CRT_SECURE_NO_WARNINGS
#define SIZE 40
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* initString();
void replaceLastWordV2(char** sentencePtr, char* word);

void main() {
	char* sentence = initString();
	char* word = initString();
	replaceLastWordV2(&sentence, word);
	printf("new Sentence is :*%s*", sentence); //pls note there is no need for newWord
	free(sentence); free(word);
}
void replaceLastWordV2(char** sentencePtr, char* word) {
	int sizeS = strlen(*sentencePtr);
	int sizeW = strlen(word);
	int countW = 0;
	for (int i = sizeS; i > 0; i--) {
		if (*(*(sentencePtr)+i - 1) == ' ') {
			break;
		}
		else {
			countW++;
			*(*(sentencePtr)+i - 1) = '\0';
		}
	}
	*(*(sentencePtr)+sizeS) = '\0';
	int newSize1 = sizeS - countW + sizeW + 1;
	int untilS = sizeS - countW;
	*(sentencePtr) = (char**)realloc(*(sentencePtr), newSize1 * sizeof(char*));
	if ((*(sentencePtr)) == NULL) {
		printf("error");
		exit(0);
	}
	for (int x = 0; untilS < newSize1 - 1; untilS++) {
		*(*(sentencePtr)+untilS) = word[x];
		x++;
	}
	*(*(sentencePtr)+newSize1 - 1) = '\0';
}
char* initString()
{
	char str[SIZE];
	char* newStr;
	int newSize = 0, newIndex = 0;
	puts("Enter a char:");
	gets(str);
	char* original1 = str;
	char* original2 = str;
	while (*original1)
	{
		newSize++;
		original1++;
	}
	newStr = (char*)malloc(newSize + 1 * sizeof(char));
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
