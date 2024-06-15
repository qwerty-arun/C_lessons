#include <stdio.h>
#include <stdlib.h>
int main()
{
  int size;
  printf("Enter the size of the array:\n");
  scanf("%d",&size);
  int arr[size];

  printf("Enter the elements of the array:\n");
  for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);

  printf("Enter the element to be searched:\n");
  int n;
  scanf("%d",&n);

  for(int i=0;i<size;i++)
  {
    if(arr[i]==n)
    {
      printf("Element found!\n");
      exit(0);
    }
  }
  printf("Element NOT found!\n");
}
