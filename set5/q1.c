/*
 * Q1: What is the output of the following C program fragment?
 */

#include <stdio.h>
int main() {
	int x = 3;
	if(x == 2); x = 0;
	if(x == 3) x++;
	else x += 2;

	printf("x = %d", x);  // outputs 2
}
