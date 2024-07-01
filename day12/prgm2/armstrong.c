#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num=159;
	int sum_of_cubes=0;
	int n=num;
	while(n>0)
	{
		int r=n%10;
		sum_of_cubes+=r*r*r;
		n=n/10;
	}
	if(sum_of_cubes==num)
	{
		printf("Armstrong number!\n");
		exit(0);
	}
	printf("Not an Armstrong number!\n");
	return 0;
}
