#include <stdio.h>
int main()
{
	int a=1,b=2;
	int sign;
	sign=-(a*b>0); // 0 if they are of opposite sign and -1 if they are of same sign
	sign=-1*sign;//making -1, 1
	printf("%d\n",sign);
	return 0;
}
