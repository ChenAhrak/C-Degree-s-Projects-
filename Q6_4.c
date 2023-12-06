#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void main()
{ 
	int arr[SIZE], after_change[SIZE] = { 0 }, pos = 0, neg = 0, i, get_arr = 0, n = 0;
	for ( i = 0; i < SIZE; i++)
		scanf("%d", &arr[i]);
	for ( i = 0; i < SIZE; i++)
	{
		if (arr[i] > 0)
			pos++;
		else
			neg++;
	}
	n = neg;
	for (i = 0; i < SIZE; i++)
	{
		get_arr = arr[i];
		if (get_arr> 0)
		{
				after_change[SIZE-(pos + n)] = get_arr;
				pos--;
     	}
		else
		{
				after_change[SIZE - neg] = get_arr;
			    neg--;
		}
		get_arr = 0;
	}
	printf("Array after:");
	for (i = 0; i < SIZE; i++)
		printf("%5d", after_change[i]);


		

	
}