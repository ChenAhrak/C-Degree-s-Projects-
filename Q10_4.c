//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#define SIZE1 4
//#define SIZE2 5
//void InputArr(int* arr, int arrsize);
//int* MergeArrays(int* arr1, int arr1Size, int* arr2, int arr2Size);
//void sort_numbers_ascending(int numbers[], int nSize);
//
//void main()
//{
//	int array1[SIZE1];
//	int array2[SIZE2];
//	InputArr(array1, SIZE1);
//	InputArr(array2, SIZE2);
//	int* result = MergeArrays(array1, SIZE1, array2, SIZE2);
//	sort_numbers_ascending(result, SIZE1 + SIZE2);
//
//
//	
//
//}
//void InputArr(int* arr,int arrsize)
//{
//	printf("Enter %d numbers in ascending order:\n", arrsize);
//	for (int i = 0; i < arrsize; i++)
//		scanf("%d", &arr[i]);
//}
//
//int* MergeArrays(int* arr1, int arr1Size, int* arr2, int arr2Size)
//{
//	int* newArr = (int*)malloc((arr1Size + arr2Size) * sizeof(int));
//	int* ptr = newArr;
//	int i = 0;
//	if (!newArr)
//	{
//		printf("Memory not aloocated.\n");
//		exit(0);
//	}
//	else {
//
//		for (i = 0; i < arr1Size + arr2Size; i++)
//		{
//			if (i <= arr1Size - 1)
//			{
//				newArr[i] = *arr1;
//				arr1++;
//
//			}
//			else
//			{
//				newArr[i] = *arr2;
//				arr2++;
//			}
//
//		}
//	}
//return ptr;
//
//}
//
//void sort_numbers_ascending(int numbers[], int nSize)
//{
//	int temp, i, j, k;
//	for (j = 0; j < nSize; ++j)
//	{
//		for (k = j + 1; k < nSize; ++k)
//		{
//			if (numbers[j] > numbers[k])
//			{
//				temp = numbers[j];
//				numbers[j] = numbers[k];
//				numbers[k] = temp;
//			}
//		}
//	}
//	printf("Numbers in ascending order:\n");
//	for (i = 0; i < nSize; ++i)
//		printf("%d\n", numbers[i]);
//}
//
//
//
