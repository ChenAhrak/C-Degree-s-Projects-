#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void print35(int* a, int n) //מקבלת מערך מספרים וגודלו מדפיסה את המתחלקים ב3
{                           // לפי הסדר ולאחר מכן כוכבית ואת המתחלקים ב5 בסדר הפוך
	if (n == 0)
	{
		printt("* ");
		return;
	}
	if (a[0] % 3 == 0)
		printf("%d", a[0]);
	print35(a + 1, n - 1); //קריאה רקורסיבית
	if ((a[0] % 5) == 0) 
		printf("%d", a[0]);
}
int in_str(char* str, char letter)//מציאת מספר הופעות של תו במחרוזת
{
	if (*str ==
		'\0') return 0;
	return (*str == letter) + in_str(str + 1, letter);
}
int even(int vec[], int size)// סופר מספרים זוגיים במערך בלי משתנה 
{
	if (size == 0)
		return 0;
	if (vec[0] % 2 == 0)
		return 1 + even(vec + 1, size - 1);
	else
		return even(vec + 1, size - 1);
}
int even(int vec[], int size)// סופר מספרים זוגיים במערך עם משתנה סטאטי
{
	static int i = 0;
	if (size == 0)
		return 0;
	if (vec[i] % 2 == 0)
	{
		i++;
		return 1 + even(vec, size - 1);
	}
	else
	{
		i++;
		return even(vec, size - 1);
	}
}
int main() {
	int vec[] = { 1, 2, 4 };
	int sum_of_array = even(vec, 3);
	printf("sum of array is %d", sum_of_array);
	return 0;
}

 

