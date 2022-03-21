/*
 * Q3: what is the output of the following C program fragment:
 */

#include <stdio.h>

int main() {
	// In c the maximum range of char is 127
	// Anything over 255 or below 0 will overflow the conversion between int to char
	char c = 255; 
	// At this point "c" is beyond the limit of the char range (127).
	// When we attempt to print c as a character we end up getting some weird escape code.
	// If we instead use %d we will print -1, this is because as said before the maximum
	// range of char is 127. When broken it will produce a negitive number. Past 128 going
	// higher it will produce a higher number. E.g. 128 = -128, 129 = -127, 130 = -126
	c += 10;  // As a recap c is currently -1
	printf("%d", c);  // Produces 9
	return 0;
}
