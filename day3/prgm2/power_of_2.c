#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	printf("Enter a positive integer: \n");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("Enter a valid number!");
		exit(0);
	}

	int c=0;
while (n != 1) {
        if (n % 2 != 0)
        {
			printf("Number is not a power of 2\n");
			exit(0);
	}
			n = n / 2;
			c++;
		}	
	printf("Number is a power of 2: 2^%d\n",c);
	return 0;
}
