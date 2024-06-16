#include <stdio.h>
int main()
{
	int arr[]={1,2,3,4,5};
	int product[5];
	for(int i=0;i<5;i++)
	{
		int pro=1;
		for(int j=0;j<5;j++)
		{
			if(i!=j)	
			{
				pro*=arr[j];
			}
		}
	product[i]=pro;	
	}
	for(int i=0;i<5;i++)
	{
		printf("%d ",product[i]);
	}
	printf("\n");
	return 0;
}
