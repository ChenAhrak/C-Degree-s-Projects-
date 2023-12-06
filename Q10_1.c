//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#define SIZEARR 8
//#define SIZEPTR 5
//
//
//int searchSummits(int stream[], int* result[], int sizeArr, int sizePtr);
//void main()
//{
//	int* summits[SIZEPTR];
//	int numbers[SIZEARR];
//	printf("Enter 8 numbers:\n");
//	for (int i = 0; i < SIZEARR; i++)
//		scanf("%d", &numbers[i]);
//	printf("The number of PSAGOT is: %d\n",searchSummits(numbers, summits, SIZEARR, SIZEPTR));
//	
//
//}
//
//int searchSummits(int stream[], int* result[], int sizeArr, int sizePtr)
//{
//	int count = 0,i;
//	if (*stream > *(stream+1))
//	{
//		result[count] = *stream;
//		count++;
//	}
//	stream++;
//	for (i=1; i < sizeArr-1; i++)
//	{
//		if (*stream > *(stream - 1) && *stream > *(stream + 1))
//		{
//			result[count] = *stream;
//			count++;
//		}
//		stream++;
//	}
//	if (*stream > *(stream - 1))
//	{
//		result[count] = *stream;
//		count++;
//	}
//	return count++;
//
//}