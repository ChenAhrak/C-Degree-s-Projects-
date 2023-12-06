//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//int Check_Arm(int N)
//{
//	int digits = 1,num=N,Check=N,Arm=0;
//	while (N / 10 != 0)
//	{
//		digits++;
//		N /= 10;
//
//	}
//	while (num / 10 != 0)
//	{
//		Arm += pow(num % 10, digits);
//		num /= 10;
//	}
//	Arm += pow(num, digits);
//	if (Arm == Check)
//		return 1;
//	else
//		return 0;
//	
//	
//}
//
//
//
//
//
//
//
//
//
//void Armstrong(int max)
//{
//	int Check = 0;
//	for (int i = 1; i <= max; i++)
//	{
//		Check = Check_Arm(i);
//		if (Check)
//			printf("%d is a Armstrong number\n", i);
//		else
//			continue;
//	}
//}
//
//void main()
//{
//	int num;
//	printf("Enter number:");
//	scanf("%d", &num);
//	Armstrong(num);
//}