/*
 * Q2: what is the output of the following C program fragment:
 */

#include <stdio.h>

static int i;
static int i = 27;
static int i;
int main() {
	static int i;
	printf("%d", i);
	return 0;
}


// I'll try to explain why this outputs 0


/*
 *                               ┌────────────────────────┐} Command line arguments and
 *  Two memory segments:         │                        │} Enviroment variables
 *  1.) Text/code segment        ├────────────────────────┤
 *  2.) Data segment             │         Stack          │
 *      a) Initialized           ├╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌┤
 *          i) Read only         │           ▼            │
 *         ii) Read write        │                        │
 *      b) Uninitialized         │           ▲            │
 *         (bss - Block          ├╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌╌┤
 *         started by            │          Heap          │
 *         Symbol)               ├────────────────────────┤
 *     	c) Stack								 │                        │       Uninitialized global, static
 *      d) Heap                  │   Uninitialized data   ├─────► (both local and global),
 *                               │         (bss)          │       constant global variables
 *                               ├────────────────────────┤
 *                               │    Initialized data    ├─────► Global, extern, static
 *                               ├────────────────────────┤       (both local and global),  
 *  Contains machine code of ◄───┤    Text/Code segment   │       const global variable  
 *  the compiled program         └────────────────────────┘
 * 
 *  
 *  An auditory version of this, along with a better explaination can be found at: https://www.youtube.com/watch?v=gegaS_gX3TY
 */    



