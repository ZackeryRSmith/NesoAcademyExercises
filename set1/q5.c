/*
 * Q5: what is the output of the following C program fragment:
 */

#include <stdio.h>

int main() {
	unsigned i = 1;
	int j = -4;
	// %d is a signed integer, while %u is an unsigned integer. Pointers (when treated as numbers) are usually non-negative.
	printf("%u", i+j);
	return 0;
}

// Integer value depends from machine to machine
// The explanation they give, though I can't understand goes as follows.

/*
 * -3 in 2s complement representation:
 * Step 1: Take 1s complement of 3
 * 				3 = 00000000 00000000 00000000 00000011
 * 				1s complement of 3 = 11111111 11111111 11111111 11111100
 * 
 * Step 2: Add 1 to the result. It will give
 * 				11111111 11111111 11111111 11111101 = 4294967293 (on my computer)
 */


