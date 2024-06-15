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

  printf("The sorted elements of the array are:\n");
  for(int i=0;i<size;i++)
    printf("%d ",arr[i]);
  printf("\n");

  int n;
  printf("Enter the number to be searched in the array:\n");
  scanf("%d",&n);

  int upper=size-1,lower=0,c=0;
while (lower<=upper)
  {
    int mid=(lower+upper)/2;
    if(arr[mid]>n)
      upper=mid-1;
    else if(arr[mid]<n)
	lower=mid+1;
    else if(arr[mid]==n){
      printf("Element found!\n");
      exit(0);
    }
  }
 printf("Element NOT found!\n");
  return 0;
}
