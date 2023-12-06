#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main() 
{
	int base, row, c, i, r;
	printf("base size:");
	scanf("%d", &base);
	if (base %2==0)
	{
		row = base/2-1;
	}
	else 
	{
		row = base/2;
	}
	for (i = 1; i <=row ; i++)
	{
		for (c = 1; c <= i; c++)
		{
			printf("*");
		}
		for (r = 1; r <=base-i ; r++)
		{
			printf("#");
		}
		printf("\n");
	}
	for (i=row-1; i > 0 ;i--)
	{
		for (c=1; c <= i ; c++)
		{
			printf("*");
		}
		for (r=i; r < base ; r++)
		{
			printf("#");
		}
		printf("\n");
	}
}