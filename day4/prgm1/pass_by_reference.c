#include <stdio.h>
void swap(int *,int *);
int main()
{
	int num1, num2;
	printf("Enter two integers: \n");
	scanf("%d%d",&num1,&num2);
		printf("Values of num1 and num2 before swapping: %d %d\n",num1,num2);
		printf("Values of num1 and num2 after swapping: ");
		swap(&num1,&num2);
	return 0;
}
void swap(int *n1, int *n2)
{
	*n1 = (*n1) + (*n2);
	*n2 = (*n1) - (*n2);
	*n1 = (*n1) - (*n2);
	printf("%d %d \n",*n1, *n2);
}
