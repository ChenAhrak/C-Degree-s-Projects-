//#include <stdio.h>
//void main()
//{
//	int a, b, basis =2;
//	printf("Enter two binary numbers:\n");
//	scanf_s("%5d%5d", &a, &b);
//	int a1 = a / 10000, a2 = (a % 10000) / 1000, a3 = (a % 1000) / 100, a4 = (a % 100) / 10, a5 = (a % 10) / 1;//devide the digits
//	int b1 = b / 10000, b2 = (b % 10000) / 1000, b3 = (b % 1000) / 100, b4 = (b % 100) / 10, b5 = (b % 10) / 1;
//	int	up5 = (b5 + a5) / basis, up4 = (b4 + a4 + up5) / basis, up3 = (b3 + a3 + up4) / basis, up2 = (b2 + a2 + up3) / basis, up1 = (b1 + a1 + up2) / basis;//calculate the remainder
//	int c5 = (b5 + a5) % basis, c4 = (b4 + a4 + up5) % basis, c3 = (b3 + a3 + up4) % basis, c2 = (b2 + a2 + up3) % basis, c1 = (b1 + a1 + up2) % basis, c0 = up1;//create new number
//	int num1 = (a1 * 10000) + (a2 * 1000) + (a3 * 100) + (a4 * 10) + a5;//combine digits to one number
//	int num2 = (b1 * 10000) + (b2 * 1000) + (b3 * 100) + (b4 * 10) + b5;
//	int sum = (c0 * 100000) + (c1 * 10000) + (c2 * 1000) + (c3 * 100) + (c4 * 10) + c5;
//	printf("first number %d, second number %d\n", num1, num2);
//	printf("final number is: %d", sum);
//
//}