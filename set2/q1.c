/*
 * Q1: What is the output of the following C program?
 */

#include <stdio.h>

int main() {
	int var = 052;  // Output is 42
	printf("%d", var);
	return 0;
}

// I don't quite understand a bit about this one but they explain it as:

/*
 * 8¹  8⁰
 * 				   5 * 8 + 2 * 1 = 40 + 2 = 42
 * 5   2       
 */

// We can get the disired output though by using "%o" instead of "%d" when printing
