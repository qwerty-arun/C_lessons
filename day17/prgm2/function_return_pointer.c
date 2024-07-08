#include <stdio.h>
int main()
{
	int *p;
	int *fun();
	p=fun();
	printf("%u\n",p);
	printf("%d\n",*p);
}

int *fun()
{
	static int i=20;
	return (&i);
}
