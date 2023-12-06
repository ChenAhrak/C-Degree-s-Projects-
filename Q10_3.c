#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
char* myItoa(int num);
void main()
{
	int num;
	char* ptr;
	printf("Enter number:");
	scanf("%d", &num);
	ptr = myItoa(num);
	printf("**%s",ptr);
	free(ptr);

}

char* myItoa(int num)
{
	char* newStr;
	int sizeString = 0;
	int saveNum = num;
	while (num)
	{
		num /= 10;
		sizeString++;
	}
	newStr = (char*)malloc(sizeString+1* sizeof(char));
	if (newStr != NULL)
	{
		newStr[sizeString] = '\0';
		sizeString--;
		while (saveNum)
		{
			newStr[sizeString] = saveNum % 10 + '0';
			saveNum /= 10;
			sizeString--;

		}

	}
	
	return newStr;
}