#include <stdio.h>
int main()
{
	int arr[]={1,3,1,5,5,1,9};
	int min=0;
  for(int i=0;i<7-1;i++)
  {
    min=i;
    for(int j=i+1;j<7;j++)
      if(arr[j]<arr[min])
	min=j;
    int temp = arr[min];  
    arr[min] = arr[i];  
    arr[i] = temp;  
  }

	for(int i=1;i<7;i++)
	{
		if(arr[i-1]==arr[i] && arr[i]!=arr[i+1])
		{
			printf("%d ",arr[i]);
		}
	}
	return 0;
}
