//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define ROWSCOL 5
//int k_FOUR(int array[][ROWSCOL]);
//void main()
//{
//	int arr[ROWSCOL][ROWSCOL];
//	printf("Enter 25 positive numbers:\n");
//	for (int r = 0; r < ROWSCOL; r++)
//	{
//		printf("\n");
//		for (int c = 0; c < ROWSCOL; c++)
//		{
//			scanf("%d", &arr[r][c]);
//		}
//
//	}
//	if (k_FOUR(arr) == -1)
//		printf("Does not exist in four K array!!");
//	else
//		printf("\nExist in array four k:  %d", k_FOUR(arr));
//
//}
//int k_FOUR(int array[][ROWSCOL])
//{
//	int k,count=0;
//	for (int r = 0; r < ROWSCOL - 1; r++) {
//		for (int c = 0; c < ROWSCOL - 1; c++) {
//			k = array[r][c];
//			if (array[r][c] == array[r][c + 1]&& array[r + 1][c] == array[r + 1][c + 1]&& array[r][c]== array[r + 1][c])
//			{
//				count++; break;
//			}
//		}
//		if (count)
//			break;
//
//	}
//	if (count)
//		return k;	
//	else
//	return -1;
//		
//}
