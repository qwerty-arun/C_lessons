#include <stdio.h>
int main()
{
	int arr[]={0,46,22,70,1};
	for(int i=1;i<5;i++)
	{
		for(int j=i;j>=0;j--)
		{
			if(arr[j]<arr[j-1])
			{
				arr[j]=arr[j]+arr[j-1];
				arr[j-1]=arr[j]-arr[j-1];
				arr[j]=arr[j]-arr[j-1];
			}
		}
	}
	for(int i=0;i<5;i++)
		printf("%d ",arr[i]);
 printf("\n");
}
