//#define _CRT_SECURE_NO_WARNINGS //מועד א
//#include <stdio.h>
//#include <stdlib.h>
//#define defultHour 23
//#define defultMin 58
//typedef struct {
//	char hour, min;
//}Time;
//typedef struct {
//	Time logTime;
//	char action;
//}Log;
//
//int getMaxCallers(Log* stream, int size, int currentCalles);
//Log* createStream(int size);
//void addTick(Time* t);
//void initTime(Log* ptr, Time t);
//
//void main() {
//	int size = 10;
//	Log* stream = createStream(size);
//	int res = 0;
//	if (stream) {
//		res = getMaxCallers(stream, size, 0);
//		printf("max=%d", res);
//	}
//	free(stream);
//}
//
//void initTime(Log* ptr, Time t) {
//	ptr->logTime = t;
//}
//
//void addTick(Time* t) {
//	t->min++;
//	if (t->min >= 60) {
//		t->min = 0;
//		if (t->hour < 23) t->hour++;
//		else t->hour = 0;
//	}
//}
//
//Log* createStream(int size) {
//	Log* res = (Log*)malloc(size * sizeof(Log));
//	if (!res) { printf("alocation failed\n"); return NULL; }
//	Time t = { defultHour,defultMin };
//	int total = 0;
//	for (int i = 0; i < size; i++) {
//		initTime(res + i, t);
//		addTick(&t);
//		if (total > 0)
//			res[i].action = rand() % 2 == 0 ? -1 : 1;
//		else
//			res[i].action = 1;
//		total += res[i].action;
//	}
//	return res;
//}
//int getMaxCallers(Log* stream, int size, int currentCalles) {
//	if (size == 0)
//		return currentCalles;
//	currentCalles += (stream->action);
//	int maxNext = getMaxCallers(stream + 1, size - 1, currentCalles);
//	return (maxNext > currentCalles) ? maxNext : currentCalles;
//}
////
//////
//////#define _CRT_SECURE_NO_WARNINGS
//////#include <stdio.h>
//////#include<stdlib.h>
//////typedef struct {
//////	int* ptr;
//////	int size;
//////
//////}Bin_Rep;
//////
//////int convertToDecimal(const int* arr, int size)
//////{
//////	if (size == 0)
//////		return 0;
//////	return arr[size -1] + 2 * convertToDecimal(arr, size-1);
//////}
//////
//////
//////void initial(int* arr, int size)
//////{
//////	for (int i = 0; i < size; i++)
//////	{
//////		arr[i] = rand() % 2;
//////	}
//////
//////}
//////
//////void initializeNumbers(Bin_Rep* arr, int size)
//////{
//////	for (int i = 0; i < size; i++)
//////	{
//////		int new_Size = rand()%11;
//////        while (new_Size == 0 || new_Size == 1)
//////	    {
//////		   new_Size = rand() % 11;
//////	    }
//////		arr->ptr = (int*)malloc(sizeof(int) * new_Size);
//////		if (arr->ptr == NULL)
//////		{
//////			printf("Erorr");
//////			exit(0);
//////		}
//////		arr->size = new_Size;
//////		initial(arr->ptr, new_Size);
//////	}
//////}
//////void main()
//////{
//////	Bin_Rep* ptr;
//////	int num;
//////	do {
//////		scanf("%d", &num);
//////
//////	} while (num < 2 || num>50);
//////	ptr = (Bin_Rep*)malloc(sizeof(Bin_Rep) * num);
//////	if (ptr == NULL)
//////	{
//////		printf("Erorr");
//////		exit(0);
//////	}
//////	initializeNumbers(ptr, num);
//////	for (int i = 0; i < num; i++)
//////	{
//////		printf("arr[%d]= %d", i, convertToDecimal(ptr[i].ptr, ptr[i].size));
//////		//free(ptr[i].ptr);
//////	}
//////	free(ptr);
//////
//////}