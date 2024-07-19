#include <stdio.h>
int main()
{
	enum days{mon,tues,wed}var;
	var = wed;
	printf("%d\n",var);
	enum point{x=8,y,z=5}p;
	printf("%d\n",x);
	printf("%d\n",y);
	printf("%d\n",z);
	return 0;
}
