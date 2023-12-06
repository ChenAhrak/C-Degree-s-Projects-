#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE1 50
#define SIZE2 10
int CountWordsIfExists(char* big, char* small);

void main()
{
	    char sentence[SIZE1];
		char word[SIZE2];
		printf("Enter a sentence 50 places max: ");
		gets(sentence);
		printf("Enter a word to search: ");
		scanf("%s", word);
		
		printf("the word %s contained %d times in the sentence", word, CountWordsIfExists(sentence,word));
}

int CountWordsIfExists(char* big, char* small)
{
	int length = strlen(small), i=0;
	char* location = strstr(big, small);
	while (location)
	{
		i++;
		location = strstr(location + length, small);
		
	}
	return i;


}