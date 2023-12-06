//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct
//{
//	char license[10];
//	int milage;
//	int year;
//}Car;
//
//char* highestMilage(Car* cars[], int year)// מחזירה את מספר הרישוי של המכונית משנה YEAR 
//										  //שנסעה הכי הרבה קילומטרים
//{
//	int i = 0;
//	int max = 0;
//	char* str = NULL;
//	while (cars[i])
//	{
//		if (cars[i]->year == year)
//		{
//			if (cars[i]->milage > max)
//			{
//				max = cars[i]->milage;
//				str = cars[i]->license;
//			}
//		}
//		i++;
//	}
//	return str;
//}
////void main()
////{
////	int year = 2012;
////	Car car1 = { "11111",20000,2011 };
////	Car car2 = { "33333",130000,2012 };
////	Car car3 = { "22222",40000,2012 };
////	Car* ptr1 = &car1;
////	Car* ptr2 = &car2;
////	Car* ptr3 = &car3;
////	Car* cars[4] = { ptr1,ptr2,ptr3,NULL }; //מערך שמכיל מצביעים למכוניות
////	char* str = highestMilage(cars, year);
////	puts(str);
////
////
////
////}