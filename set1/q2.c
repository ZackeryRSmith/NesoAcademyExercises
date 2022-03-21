/*
 * Q2: what is the output of the following C program fragment:
 */

#include <stdio.h>

int main() {
	printf("%s \n", "Hello");

	// The numeric in the control string will give you the x amount of leading spaces
	printf("%10s \n", "Hello");
	return 0;
}
