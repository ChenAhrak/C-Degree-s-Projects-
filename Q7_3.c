//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define ROWCOL 6
//int halfReverseHalfDifferent(char arr1[], char arr2[], int length)
//{
//	int j , i;
//	for (i = 0; i < length / 2; i++)
//	{
//		for (j = length / 2; j < length; j++)
//		{
//			if (arr1[i] == arr2[j])
//				return 0;
//		}
//	}
//			for (j = 0; j < length / 2; j++)
//
//			{
//					if (arr2[j] != arr1[length - 1 - j])
//					   return 0;
//					
//				}
//				
//			
//			return 1;
//	}
//
//	int confusedArray(char array[][ROWCOL], int M)
//	{
//		char arr1[ROWCOL];
//		char arr2[ROWCOL];
//		int r,c;
//			for (r = 0; r < M/2; r++)
//			{
//				for (c = 0; c < M ; c++)
//				{
//					arr1[c] = array[r][c];
//					arr2[c] = array[M - 1 - r][c];
//				}
//				if (halfReverseHalfDifferent(arr1, arr2, M) == 0)
//					return 0;
//
//				
//			}
//			return 1;
//		}
//
//	
//	void main()
//	{
//		char a[ROWCOL][ROWCOL];
//		printf("enter 36 letters for array:\n ");
//		for (int r = 0; r < ROWCOL; r++)
//		{
//			for (int c = 0; c < ROWCOL; c++) 
//			{
//				scanf(" %c", &a[r][c]);
//			}
//		}
//		if (confusedArray(a, ROWCOL) == 1)
//			printf("The array of letters is confused!!");
//		else
//			printf("The array of letters is not confused!!");
//	}