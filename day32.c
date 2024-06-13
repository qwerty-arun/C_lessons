#include <stdio.h>
#include <stdlib.h>
int main()
{
  int length;
  printf("Enter the length of the array (should be even):\n");
  scanf("%d", &length);
  if((length%2==1)||(length<=0)||length<2)
  {
    printf("Enter Valid Number!\n");
      exit(0);
  }
  printf("Enter the elements of the array such that there are equal no. of odd and even numbers:\n");
  int nums[length];
  for(int i=0;i<length;i++)
    scanf("%d",&nums[i]);

  int no_positives=0,no_negatives=0;
  for(int i=0;i<length;i++)
  {
    if(nums[i]>0)
      no_positives++;
    else
      no_negatives++;
  }
  if(no_positives!=no_negatives)
  {
    printf("Number of positive and negative numbers don't match!\n");
    exit(0);
  }

  printf("\nThe elements of the array are: \n");
  for(int i=0;i<length;i++)
    printf("%d ",nums[i]);
  printf("\n");

  int duplicate[length];
  for(int i=0;i<length;i++)
    duplicate[i]=nums[i];

  if(length==2 && nums[0]<0)
  {
    nums[0]=duplicate[1];
    nums[1]=duplicate[0];
  printf("\nThe modified elements of the array are: \n");
  for(int i=0;i<length;i++)
    printf("%d ",nums[i]);
  printf("\n");
  }
  else
  {
  int c=0;
  int d=1;
  for(int j=0;j<length;j=j+1)
  {
    if(duplicate[j]>0){
    nums[c]=duplicate[j];
    c=c+2;
    }
  }
  for(int j=1;j<length;j=j+1)
  {
    if(duplicate[j]<0)
    {
    nums[d]=duplicate[j];
    d=d+2;
    }
  }
  printf("\nThe modified elements of the array are: \n");
  for(int i=0;i<length;i++)
    printf("%d ",nums[i]);
  printf("\n");
  }
}
