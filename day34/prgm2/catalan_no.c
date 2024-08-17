#include "stdio.h"

int factorial(int n)
{
  int factorial=1;
    for(int i=1;i<=n;i++)
     factorial=factorial*i;
  return(factorial);
}

void catalan(int n)
{
	printf("%d th Catalan number(C%d): %d\n",n,n,(factorial(2*n)/(factorial(n+1)*factorial(n))));
}

int main()
{
	catalan(3);
}
