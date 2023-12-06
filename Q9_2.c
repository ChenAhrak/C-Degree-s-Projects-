//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#define SIZE1 50
//#define SIZE2 10
//
//void hidingWord(char* big, char* small);
//void main()
//{
//	char sentence[SIZE1];
//	char word[SIZE2];
//	printf("Enter a sentence 50 places max: ");
//	gets(sentence);
//	printf("Enter a word to search: ");
//	scanf("%s", word);
//	hidingWord(sentence, word);
//	printf("%s", sentence);
//	
//}
//
//void hidingWord(char* big, char* small)
//{
//	int length = strlen(small), i;
//	char* location = strstr(big, small);
//	if (!location)
//		printf("didnt' find!!");
//	while (location)
//	{
//		i = 0;
//		while (i < length)
//		{
//			*location = '*';
//			location++;
//			i++;
//		}
//		location = strstr(location + length, small);
//	}
//
//
//}