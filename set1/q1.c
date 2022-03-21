/*
 * Q1: what is the output of the following C program fragment:
 */

#include <stdio.h>

int main() {
	// %s is used to print "string of characters."
	// Printf not only prints the content on the screen. It also
	// returns the number of characters that it successfully prints
	// on the screen.
	printf("%d", printf("%s", "Hello, World!"));  // Hello, World!13
	return 0;
}
