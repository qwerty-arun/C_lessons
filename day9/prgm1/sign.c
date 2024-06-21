#include <stdio.h>
#define CHAR_BIT 8
int main()
{
	int v=5;      // we want to find the sign of v
int sign;   // the result goes here 

// CHAR_BIT is the number of bits per byte (normally 8).
//sign = -(v < 0);  // if v < 0 then -1, else 0. 
// or, to avoid branching on CPUs with flag registers (IA32):
//sign = -(int)((unsigned int)((int)v) >> (sizeof(int) * CHAR_BIT - 1));
// or, for one less instruction (but not portable):
sign = v >> (sizeof(int) * CHAR_BIT - 1);
	printf("%d\n",sign);
}
