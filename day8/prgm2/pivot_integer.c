#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n = 8;
	if(n<1 || n>1000)
		exit(0);
	int sum_up_to_n=(n*(n+1))/2;
	int sum_up_to_x=0;
	int sum_after_x=0;
	for(int i=1;i<=n;i++)
	{
		int x=i;
		sum_up_to_x=x*(x+1)/2;
		for(int j=x;j<=n;j++)
			sum_after_x+=j;
		//sum_after_x=sum_up_to_n-sum_up_to_x;
		if(sum_up_to_x == sum_after_x)
			{
				printf("The pivot integer is: %d",x);
				exit(0);
		}
		sum_up_to_x=0;
		sum_after_x=0;
	}
	printf("-1\n");
	return 0;
}
