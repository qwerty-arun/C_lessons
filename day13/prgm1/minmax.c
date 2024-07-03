#include <stdio.h>
int main()
{
	int x=9;
	int y=8;
	int result;
	result = y ^ ((x^y) & -(x<y));//min
	printf("Minimum of the two integers is: %d",result);
	return 0;
}
