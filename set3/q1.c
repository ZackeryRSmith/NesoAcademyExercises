/*
 * Q1: what is the output of the following C program fragment:
 */

#include <stdio.h>

int main() {
	int var = 0x43FF;
	// %x  - Unsigned hexadecimal integer
	// %X  - Unsigned hexadecimal integer (uppercase)
	// %d  - Signed decimal integer
	printf("%d", var);
	return 0;
}
