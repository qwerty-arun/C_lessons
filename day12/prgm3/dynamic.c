#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *arr;
	int n;
	printf("Enter the number of elements in the array:\n");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	if(arr==NULL)
	{
		printf("Memory Allocation Failed!\n");
		return 1;
	}
	printf("Enter the elements of the array:\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	printf("The array elements of the array:\n");
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");

	free(arr);//freeing the allocated memory
	
	return 0;
}
