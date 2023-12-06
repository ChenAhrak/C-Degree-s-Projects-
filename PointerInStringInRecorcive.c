//#define _CRT_SECURE_NO_WARNINGS
//#include <string.h>
//#include <stdio.h>
//
//int isBSeqCompiled(const char* str);
//int checkValid(char* str);
//void main()
//{
//	char str[] = "()(((()()())))";
//	int result = isBSeqCompiled(str);
//	printf("%d", result);
//
//
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