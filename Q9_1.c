//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#define SIZE 50
//void swapPairChs(char* str);
//
//void main()
//{
//	char str[SIZE];
//	printf("Enter a word: ");
//	scanf("%s", str);
//	swapPairChs(str);
//	printf("word after the swap: ");
//	printf("%s", str);
//}
//
//void swapPairChs(char* str)
//{
//	char a,b;
//	char* ptr = str + 1;
//	int length = strlen(str);
//	if (length % 2 != 0)
//		*(str + length - 1) = NULL;
//	while (*str)
//	{
//		 a = *str;
//		 b = *ptr;
//		*str = b;
//		*ptr = a;
//		str += 2;
//		ptr += 2;
//	}
//}