#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void trinangle(int base)
{
	int nbase = 0,x;
	x = base / 2 ;
	nbase = base /2+2;
	for (int row = 1; row <= base/2+1; row++)
	{
		x++;
		nbase--;
		for (int i = 1; i <=base; i++)
		{
			if (row == base/2+1)
			{
				printf("%c", '*');
			}
			else

			if (i == nbase|| i == x)
			   printf("%c", '*');
		
			else
			printf(" ");
			
		}
		printf("\n");

	}


}
void main()
{
	int num;
	
    printf("Enter an odd number larger than 1:");
	scanf("%d", &num);
	while(num <= 1 || num % 2 == 0)
	{
		printf("This is not an odd number larger than 1, try again..\n");
		printf("Enter an odd number larger than 1:");
		scanf("%d", &num);
	}
	trinangle(num);
}