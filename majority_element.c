#include <stdio.h>
#include <stdlib.h>
int main()
{
  int size;
  printf("Enter the number of elements in the array:\n");
  scanf("%d",&size);
  if(size<=0)
  {
    printf("Enter valid number!\n");
    exit(0);
  }
  int arr[size];

  printf("Enter the elements in the array:\n");
  for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
  
  int c=0;
  for(int i=0;i<size;i++)
  {
    for(int j=0;j<size;j++)
    {
      if(arr[j]==arr[i])
	c++;
    }
    if(c>(size/2))
    {
      printf("The majority element is: %d",arr[i]);
      printf("\n");
      exit(0);
    }
    c=0;
  }
printf("There is no majority element!\n");
}
