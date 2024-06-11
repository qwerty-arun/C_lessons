#include <stdio.h>
#include <stdlib.h>
int factorial(int n);
int main()
{
  int n;
  printf("Enter a number of which factorial is to be found\n");
  scanf("%d",&n);
  if(n<=0)
  {
    printf("Invalid Number! Enter a positive number!\n");
    exit(0);
  }
  int fact=factorial(n);
  printf("The factorial of %d is: %d\n",n, fact);
  return(0);
}
int factorial(int n)
{
  int factorial=1;
    for(int i=1;i<=n;i++)
     factorial=factorial*i;
  return(factorial);
}
