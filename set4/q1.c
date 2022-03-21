/*
 * Q1: What is the output of the following C program fragment?
 *     Assuming size of insigned int is 4 bytes.
 * 		 
 * 		 a) Infinite loop
 * 		 b) 0
 * 		 c) 1
 * 		 d) Compiler error
 */

#include <stdio.h>
int main() {
	unsigned int i = 500;
	// This is not infact an infinite loop, for a weird reason.
	while(i++ != 0);  
	printf("%d", i);
	return 0;
}


// The explanation given to us


/*
 *                                   Range of unsigned int (4 bytes)
 * #include <stdio.h>                0 to 4294967295
 * int main() {            
 * 	 unsigned int i = 500;           When i reaches 4294967295, then
 *   while(i++ != 0);                because of i++, it comes back
 *   printf("%d", i);                again to 0
 *   return 0;             
 * }                       					 As 0 not equal to 0 is false
 *                                   therefore we come outside of the 
 *                                   while loop
 *
 *                                   After we come out of the loop, i
 *                                   will contain 1 because of post
 *                                   increment operator. Therfore, 1
 *                                   will be printed on the screen.
 *
 *      c is the correct answer to this problem
 */
