#include <stdio.h>
int main()
{
	int arr[] = { 4, 111, 98, 23};
	int k=1;
	int freq[4];
	for(int i=0;i<4;i++)
	{
     		int n=arr[i];int c=0;
		while(n>0)
		{
			int r = n % 10;
			if(r==k)
			{
				c++;
			}
			n=n/10;
			freq[i]=c;
		}
	}

	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<4;j++)
		{
			if(freq[i]>freq[j])
			{
				freq[i]=freq[i]+freq[j];
				freq[j]=freq[i]-freq[j];
				freq[i]=freq[i]-freq[j];

				arr[i]=arr[i]+arr[j];
				arr[j]=arr[i]-arr[j];
				arr[i]=arr[i]-arr[j];
			}
		}
	}
	printf("The element with maximum frequency of digit %d is: %d\n",k,arr[3]);
	return 0;
}
