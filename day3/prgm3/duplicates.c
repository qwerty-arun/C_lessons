#include <stdio.h>
#include <stdlib.h>
int main()
{
  int size;
  printf("Enter the size of the array:\n");
  scanf("%d",&size);
	if(size<=0)
	{
		printf("Enter a Positive Integer!\n");
		exit(0);
	}
  int arr[size];

  printf("Enter the elements of the array:\n");
  for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);

  printf("The elements of the array are:\n");
  for(int i=0;i<size;i++)
    printf("%d ",arr[i]);
  printf("\n");

  int min=0;
  for(int i=0;i<size-1;i++)
  {
    min=i;
    for(int j=i+1;j<size;j++)
      if(arr[j]<arr[min])
	min=j;
    int temp = arr[min];  
    arr[min] = arr[i];  
    arr[i] = temp;  
  }
	for(int i=0;i<size;i++)
	{
		if(arr[i]==arr[i+1])
		{
			printf("%d ",arr[i]);
			continue;
		}
	}
	return 0;
}
