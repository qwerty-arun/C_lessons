#include <stdio.h>
#include <stdlib.h>
int main()
{
  int size;
  printf("Enter the number of elements in the array (>=3):\n");
  scanf("%d",&size);
  if(size<=0 || size<3)
  {
    printf("Enter valid number!\n");
    exit(0);
  }
  int arr[size];

  printf("Enter the elements in the array:\n");
  for(int i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
    if(arr[i]<0)
    {
      printf("Enter Positive Integer!\n");
      exit(0);
    }
  }

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
int sum=0;int index=1;
  for(int i=size-2;i>=0;i--)
  {
    for(int j=0;j<=i;j++)
    {
    sum=sum+arr[j];
    }
      if(sum>arr[i+1])
      {
	printf("Largest Possible Perimeter of a Polygon: %d\n",sum+arr[i+1]);
      exit(0);
      }
      else
      {
      sum=0;
      index++;
    }
  }
  printf("Not Possible to Construct a polygon!\n");
return 0;
}
