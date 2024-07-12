#include <stdio.h>
#include <stdbool.h>
int main()
{
	bool fDontNegate=0;  // Flag indicating we should not negate v.
	int v=10;             // Input value to negate if fDontNegate is false.
	int r;             // result = fDontNegate ? v : -v;
	r = (fDontNegate ^ (fDontNegate - 1)) * v;
	printf("%d\n",r);
	return 0;
}
