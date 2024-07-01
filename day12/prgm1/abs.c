#include <stdio.h>
#define CHAR_BIT 8 
int main()
{
	int v=-10;           // we want to find the absolute value of v
unsigned int r;  // the result goes here 
int const mask = v >> (sizeof(int) * (CHAR_BIT - 1));
	r = (v + mask) ^ mask; 
r = (v ^ mask) - mask;//second method
	printf("%d\n",r);
	return 0;
}
