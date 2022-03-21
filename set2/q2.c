/*
 * Q2: What is the output of the following C program?
 */

#include <stdio.h>

#define STRING "%s\n"
#define NESO "Welcome to Neso Academy!"

int main() {
	// This will print "Welcome to Neso Academy!"
	printf(STRING, NESO);
	// The printf statment above is no diffrent then writing
	// printf("%s\n", "Welcome to Neso Academy!")
	return 0;
}
