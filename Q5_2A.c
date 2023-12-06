//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//int find_power(int N)
//{
//	int digits = 1;
//	while (N / 10 != 0)
//	{
//		digits++;
//		N /= 10;
//	}
//	return digits;
//
//}
//int merge_numbers(int n, int m)
//{
//	int exponent = 0, mExponent = 0, nExponent = 0, nNum = 0;
//	int p1=0,p2=0;
//	mExponent = find_power(m);
//	nExponent = find_power(n);
//	exponent = find_power(n) + mExponent;
//	for(int i=0;i<mExponent;i++)
//	{
//		p2=pow(10.0, i);
//		nNum += m % 10 * p2;
//		m /= 10;
//	}
//	for(int j=exponent-nExponent;j<=exponent-1;j++)
//	{
//		p1= pow(10.0, j);
//		nNum += n % 10 * p1;
//		n /= 10;
//		
//		
//	}
//	nNum+= n * (pow(10.0,exponent));
//	return nNum;
//}
//void main()
//{
//	int num1,num2,result=0;
//	scanf("%d%d", &num1,&num2);
//	result = merge_numbers(num1,num2);
//	printf("%d", result);
//}