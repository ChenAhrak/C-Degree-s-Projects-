//#define _CRT_SECURE_NO_WARNINGS
//#include <string.h>
//#include <stdio.h>
//int isBSeqCompiled(const char* str);
//int checkValid(char* str);
//int isArithmeticOp(char c);
//int isValidPreorderExp(const char* str);
//
//void main()
//{
//	char str[] = "()(((()()())))";
//	int result = isBSeqCompiled(str);
//	printf("%d", result);
//
//
//}
//
//int isValidPreorderExp(const char* str)
//{
//	char* ptr = str;
//	char* nStr;
//	if (!isBSeqCompiled(ptr))
//		return 0;
//	else
//		nStr = (char*)malloc(3);
//	{
//		while (*str)
//		{
//			if(*str=='(' ||*str==')')
//			 nStr
//
//			if (isArithmeticOp(*str) && *str++ == '(')
//				str += 2;
//			else
//				str++;
//			
//		}
//	}
//}
//
//
//int isArithmeticOp(char c)
//{
//	switch (c)
//			{
//			case '+': return 1;
//				break;
//			case '/': return 1;
//				break;
//		
//			case '-': return 1;
//				break;
//			case '*':return 1;
//				break;
//			default:
//				return 0;
//			}
//}
//
//int checkValid(char* str) // בודקת סגירה ןפתיחה חוקית של סוגריים () רקורסיבית
//{
//	static int balnaced =1; //משתנה סטטי קבוע(מאותחל) רק בהתחלה
//	char* ptr = str;
//	while (*ptr)
//	{
//		if (!balnaced)
//			return 0;
//		if (*ptr == '(')
//		{
//			balnaced++;
//			return checkValid(++ptr)+balnaced;
//
//		}
//		if (*ptr == ')')
//		{
//			balnaced--;
//			return checkValid(++ptr) - balnaced;
//		}
//	}
//	return 1;
//
//}
//
//
//int isBSeqCompiled(const char* str)
//{
//	return checkValid(str);
//
//}