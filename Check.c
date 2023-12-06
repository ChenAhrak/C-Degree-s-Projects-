#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int toDecimal(unsigned number, int base);
void main() {
	printf("100 in base 2 is : %d", toDecimal(00011, 2));
	printf("\n101 in base 2 is : %d", toDecimalV2(101, 2));
	printf("\n1100 in base 2 is : %d", toDecimalV2(1101, 2));
}

int toDecimal(unsigned number, int base) { // מבינארי לדצימלי

	if (number < base)
		return number;

	return toDecimal(number / 10, base) * base + number % 10;
}

int toDecimalV2(unsigned number, int base) {

	static int power = 1;

	if (number == 0) {
		power = 1;
		return 0;
	}

	int res = number % base * power;

	power *= base;

	return toDecimalV2(number / 10, base) + res;
}