#include <stdio.h>
int main()
{
	int i=5;
	float a=3.14;
	char *ii,*aa;
	ii=(char*)&i;
	aa=(char*)&a;
	printf("Address contained in ii: %u\n",ii);
	printf("Address contained in ii: %u\n",aa);
	printf("Address contained in ii: %u\n",*ii);
	printf("Value at the address contained in aa: %u\n",*aa);
	return 0;
}
