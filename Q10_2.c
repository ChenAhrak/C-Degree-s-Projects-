//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#define SIZE 40
//char* initString();
//
//void main()
//{
//	char* ptr=initString();
//	printf("**%s",ptr);
//	free(ptr);
//}
//
//char* initString()
//{
//	char str[SIZE];
//	char* newStr;
//	int newSize = 0,newIndex=0;
//	puts("Enter a word:");
//    gets(str);
//	char* original1 = str;
//	char* original2= str;
//    while(*original1)
//	{
//		newSize++;
//		original1++;
//	}
//	newStr = (char*)malloc(newSize+1 * sizeof(char));
//	if (newStr != NULL)
//	{
//		while (*original2)
//		{
//			newStr[newIndex] = *original2;
//			original2++;
//			newIndex++;
//		}
//		newStr[newIndex] = '\0';
//	}
//	return newStr;
//}