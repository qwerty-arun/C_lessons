#include <stdio.h>
int main()
{
	int arr[]={1,7,7,5,9,10,17};
	for(int i=0;i<7;i++)
	{
		for(int j=i+1;j<7;j++)
		{
			if(arr[i]>arr[j])
			{
				arr[i]=arr[i]+arr[j];
				arr[j]=arr[i]-arr[j];
				arr[i]=arr[i]-arr[j];
			}
		}
	}
	for(int i=0;i<7;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
